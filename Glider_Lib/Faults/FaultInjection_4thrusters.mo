within Glider_Lib.Faults;

model FaultInjection_4thrusters

  Modelica.Blocks.Sources.Step efficiency_u3_sum1(height = -(1-efficiency_after_fault/100), offset = 1.0, startTime = time_fault_u3) annotation(
    Placement(visible = true, transformation(origin = {-72.5, -19.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Math.Add eff_3 annotation(
    Placement(visible = true, transformation(origin = {-43.5, -23.5}, extent = {{-7.5, -7.5}, {7.5, 7.5}}, rotation = 0)));
  Modelica.Blocks.Math.Add eff_1 annotation(
    Placement(visible = true, transformation(origin = {-43.5, 88.5}, extent = {{-7.5, -7.5}, {7.5, 7.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u1_sum1(height = -(1-efficiency_after_fault/100), offset = 1.0, startTime = time_fault_u1) annotation(
    Placement(visible = true, transformation(origin = {-76.5, 92.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u2_sum1(height = -(1-efficiency_after_fault/100), offset = 1.0, startTime = time_fault_u2) annotation(
    Placement(visible = true, transformation(origin = {-75.5, 36.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u1_sum2(height = (1-efficiency_after_fault/100), offset = 0.0, startTime = time_fault_u1 +fault_duration) annotation(
    Placement(visible = true, transformation(origin = {-76.5, 71.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u3_sum2(height = (1-efficiency_after_fault/100), offset = 0.0, startTime = time_fault_u3 + fault_duration) annotation(
    Placement(visible = true, transformation(origin = {-72.5, -41.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Math.Add eff_2 annotation(
    Placement(visible = true, transformation(origin = {-46.5, 32.5}, extent = {{-7.5, -7.5}, {7.5, 7.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u2_sum2(height = (1-efficiency_after_fault/100), offset = 0.0, startTime = time_fault_u2 + fault_duration) annotation(
    Placement(visible = true, transformation(origin = {-75.5, 14.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput h_1 annotation(
    Placement(visible = true, transformation(origin = {40, 88}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {88, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput h_2 annotation(
    Placement(visible = true, transformation(origin = {42, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {88, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput h_3 annotation(
    Placement(visible = true, transformation(origin = {42, -24}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {88, -34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput h_4 annotation(
    Placement(visible = true, transformation(origin = {42, -72}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {90, -88}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add eff_4 annotation(
    Placement(visible = true, transformation(origin = {-41.5, -73.5}, extent = {{-7.5, -7.5}, {7.5, 7.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u4_sum11(height = -(1-efficiency_after_fault/100), offset = 1.0, startTime = time_fault_u4) annotation(
    Placement(visible = true, transformation(origin = {-72.5, -69.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Step efficiency_u4_sum21(height = (1-efficiency_after_fault/100), offset = 0.0, startTime = time_fault_u4 + fault_duration) annotation(
    Placement(visible = true, transformation(origin = {-72.5, -95.5}, extent = {{-6.5, -6.5}, {6.5, 6.5}}, rotation = 0)));
  parameter Real efficiency_after_fault = 100.0 "[%]. 0% = thruster fully faulty, 100% = thruster healthy";
  parameter Real time_fault_u1(unit = "s") = 0.0 "time of fault injected on actuator #1";
  parameter Real time_fault_u2(unit = "s") = 0.0 "time of fault injected on actuator #2";
  parameter Real time_fault_u3(unit = "s") = 0.0 "time of fault injected on actuator #3";
  parameter Real time_fault_u4(unit = "s") = 0.0 "time of fault injected on actuator #4";
  parameter Real fault_duration(unit = "s") = 0.0 "time duration of the fault before being resolved";


equation
  assert(efficiency_after_fault >= 0.0 and efficiency_after_fault <= 100.0, "WARNING OpenMAUVe setup: efficiency variable out of limit (0 to 100)!", level = AssertionLevel.error); 
  assert(time_fault_u1 >= 0.0, "WARNING OpenMAUVe setup: time of fault must be >= 0 s!", level = AssertionLevel.warning); 
  assert(time_fault_u2 >= 0.0, "WARNING OpenMAUVe setup: time of fault must be >= 0 s!", level = AssertionLevel.warning); 
  assert(time_fault_u3 >= 0.0, "WARNING OpenMAUVe setup: time of fault must be >= 0 s!", level = AssertionLevel.warning);  
  assert(time_fault_u4 >= 0.0, "WARNING OpenMAUVe setup: time of fault must be >= 0 s!", level = AssertionLevel.warning); 
  assert(fault_duration >= 0.0, "WARNING OpenMAUVe setup: duration of a fault must be >= 0 s!", level = AssertionLevel.error); 

  connect(efficiency_u2_sum1.y, eff_2.u1) annotation(
    Line(points = {{-68.35, 36.5}, {-55.35, 36.5}}, color = {0, 0, 127}));
  connect(efficiency_u1_sum2.y, eff_1.u2) annotation(
    Line(points = {{-69.35, 71.5}, {-61.35, 71.5}, {-61.35, 84}, {-52.85, 84}}, color = {0, 0, 127}));
  connect(efficiency_u3_sum1.y, eff_3.u1) annotation(
    Line(points = {{-65.35, -19.5}, {-52.35, -19.5}}, color = {0, 0, 127}));
  connect(efficiency_u3_sum2.y, eff_3.u2) annotation(
    Line(points = {{-65.35, -41.5}, {-59.35, -41.5}, {-59.35, -28.5}, {-52.35, -28.5}}, color = {0, 0, 127}));
  connect(efficiency_u2_sum2.y, eff_2.u2) annotation(
    Line(points = {{-68.35, 14.5}, {-62.35, 14.5}, {-62.35, 27.5}, {-55.35, 27.5}}, color = {0, 0, 127}));
  connect(efficiency_u1_sum1.y, eff_1.u1) annotation(
    Line(points = {{-69.35, 92.5}, {-52.85, 92.5}, {-52.85, 93}}, color = {0, 0, 127}));
  connect(eff_1.y, h_1) annotation(
    Line(points = {{-35.25, 88.5}, {40.75, 88.5}}, color = {0, 0, 127}));
  connect(eff_2.y, h_2) annotation(
    Line(points = {{-38.25, 32.5}, {41.75, 32.5}}, color = {0, 0, 127}));
  connect(eff_3.y, h_3) annotation(
    Line(points = {{-35.25, -23.5}, {42.75, -23.5}}, color = {0, 0, 127}));
  connect(efficiency_u4_sum11.y, eff_4.u1) annotation(
    Line(points = {{-66, -70}, {-59, -70}, {-59, -68}, {-50, -68}}, color = {0, 0, 127}));
  connect(efficiency_u4_sum21.y, eff_4.u2) annotation(
    Line(points = {{-66, -96}, {-60, -96}, {-60, -78}, {-50, -78}}, color = {0, 0, 127}));
  connect(eff_4.y, h_4) annotation(
    Line(points = {{-34, -74}, {42, -74}, {42, -72}}, color = {0, 0, 127}));

annotation(
    Icon(graphics = {Bitmap(origin = {-3, 1}, rotation = 180, extent = {{-77, 75}, {77, -75}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAO4AAAD6CAAAAACDwiRzAAAABGdBTUEAALGPC/xhBQAAAAJiS0dEAP+Hj8y/AAAAB3RJTUUH5QIYEhYkWgkqmQAAFctJREFUeNrtXWmYnWV5vu/n/b4zS0JISEIkkEBCEpCEkGBQWy1YxGCqXtZqa6ulq221trTWpYtWina77CJuXVxasVjb2n3TH/bqZRcqCELYW5WAFjIkk2SyzOSc833vc/fHNzPnzBIvrXzvcE7m+ZGLOecw893ned9nXyicTmQL/QCLcBfhLsJdhLsIdxHuaUSLcPuZFuH2My3C7Wc6zeBmM38UATcBdMh8oZ/u/0EyJwyEAPpsbnKOex9NlIwQKC7003+jYAkRQoQZnHMefzZcN1FljubIyKFjoedCHYwWcOa6NStQzjm588AVnWWw//n0bY8cnWDsNeYC5rCwbM32q68Ocs6RTHMPs/jIhz8z6li2ZGied5/iJALl+PGWr7joNS+Af224Aj2Gv73pQPucXc+8dPlAtF6Dy5h5WXzptjsfYP7ity0tA2Ye0JlwBdm7P+KD3/XKzYTceu8wixIMRz/9sa+euPym82ZLq5nHVR5+5/cbF9xwBVkYe+8sAwAsigGHf+uf2xv/aPX8cEUAYgwff0dj23vObgejKt3Vm+Q0ffB9cdcHGwhT8LrgAoCb88Hrmps/embMnBXcXjvNU2gY6dl7P9h+3RvcYujgsKmPCQb6+4+f8evLy6CKub1HnCQFC/H654Q/fcBiiB0ok3AJAhF3fhY/cnE792neL/Tj/79hRyfw1rMO/QmkLv0ypZkERPKvmxtfZrmCAPYsVABAMA+t9S+1//hK5l1IpuASMBv9fLxmdVmxGuhdQQUIMGT+kmWjt4LeEVDTdodDuu+JpVfKCPjUV9CrRAiwcvOlR7+gssu26vrPyH3jT9tC0zzGV+8RIWZhc75PueaIKoEwjMTVw5D6xeeX81weP9xtLHWQSSrikInWy5d2Fi2xZlNd5tK0IgKIqLw37cZTUm7uwJzDDACkW+xly3EWEUCEGTVX7wIARBjR0yJ5Bl6ClGMevTtpPVfv9gt/AQIC59G7qv5R/0CtANHQpYhmhK8I9bjtOId8JvumuVtZjhXf+wjyLK3aJxbF14/+tKJFuP1Mpxnc7Jv/FV8fnVLiJw2KpePuKQwYJY2aJOKuGDOfA0wwJ8V04YREcIkMBslmvSqmDSekgSsft2iyGQeaAEIcDvDQX3Dl4QOfWtmeLysx9qbvLPMymcBM9Yd2/OGJUspmV3vko595aZ4wNZMELk1XX/qV4SIv59zSFf8zvgTpDnMaKUFluydiKOizSNmBh5iwwCeVUAzfvmQ+DRvzE7en1LuJ4NIv2XV8ntCBKdwbExqyqeDCXuTz2U8+8N+HLV3EKBFcOZ67biLMYa809PhDKJOJ5lTczcrVV7XmYaIs3pnQR0h1byTsacwtSzMvw92ezMpIBpd53HlJe46C9eCDXzyQTjanuruIyPe0yjmvk4OHvqBkmjfV3Y0BuHrFnNdDQcS70xkaqQ6zyfz8Zx8PJqKrNETGmN/dzIU0iJOJKjBiDxEpdUkswm3w0f3JIjip7q4RAVduOBlE63IJHCzDoXtnpul6Hy4AWTn8/AkyelZ0/XlnwO1MFbJKJaoEiP7CMxxkV92wMqcP3DduSJOZSqZ3QQa7ePsJM3YVDrvnMQ59ZZ8pje5Npnfh8Ji9pGT0rOjkW0tYyE7cPTsx2eNwKRiMeN6alpnn01on5qXk3Ft9J/VDTneYBTCuunI8c3ZiOJIBGtg7HhxIUC6eOEekFw9GeqcfyyLobIw8yDSnOR1cAjBevulkNqOalnDPT9xVyeXahXNa7jIOvOgk2LGRFYTgauyNIUlLWlK4hLh7dburxJQQzIqB+w6naQRIfHcznfusE6ErVSQwAgMjD9NTaN7EcD3atQGh4/fKJDDE29JUr6WFK8t41bpmpzePlAIU7S6ZEjxLYlEFlEuuGQfJ6t4KoEANfXkkyQOk1rvKcO3SwiWpq0JPAwfvS1JanBguqXLbZc1csEnmTr7evksR9Yc0klfeOMOetkNgF3vlA/cUQfXf3tSHGYF43tq2wWfYVj70xf2WwMNPfZgBxqdddSLYjPgFmR2+R+o7FwECo3YPltUf7uCVPq9YfwVOarh0NPTMLU2vPMKpVwsO3FdkPctdnfJ1g9R4QdNKBnSFrOLgow8nCGnUBPdU5j4dInnN8tiIkZ0AbAx2/P4E5WTJDzPkKjZ9y3gRzH1az2bRdBvqzxWlVkSEMRC71VCEdYI4zsH7m43ao1XJFZFAZHjeugkG6zhGbuXAYw/1WzQDAAS5znjheCi79CypbOIO1O7z1gZXmu9kqmrdgq4ZLnN2HEFnkN1Tv1lVI3fne3RCiCJ16c7x7i8keNTAA6O1l8/VBDfijv8iXaggqeP8EIGgh90lu6xmET64/2E66uVwTXAtNl73zhGiIBmr5sOZ73P36mbw6YkGcortO0BWfYg9Bhfhkg0ffvWfNvOiRECc5+tYeWVTnGYlSVj4PAAJrO+G1WVVxXDZkrEbfuizedae1411+w6Deef6OsvBh0dCFX6tjb11fZFuzygbK+997Vu+3KjyIbPy1UFXPP1E190F6PnB+xBBqb6Qc11wDRetaPKMZX/z6j8cCyp9llpyw8A17U5DKRFAa+0FBdY4oqQuj8iwYUPb276yeNd1/xgy+Ew9bIjYs6zsFElKDuR3N4NUZ+azrrvLorGtsNxLW73vja+732yWaPYM6589gY6sAoihLx5Q1VbbY3CFoF30yGjt4eX/et1vjgUJXTLIVGa73RzBq3FSosrG4QdYr4tfn7/LrSuKTCHCfYl95BV/LnOHVSdViGr41esnMsVMtKoJns5bUdRqxdf1y0vDmgvbUVSAZ1o5+vYfvjWzwiNAOBUMWnb1BAxe6VoAVP5gK9Q666AuuBmKgR3tYG4ESpQDZ9z52l94NDeIcAMhwa9dUopuoIGEgMF9+yzWWaNR292NwPYAAA6TIdrw4F+/6sMT5u1qrh1o3Lq1RQZ4lU8QEMYeAKsMUk/BpSzHjlVtBQkwgVFaOfGu6/4lNCIRQYLF4LUTBkkuoEqjhDtAr7EetCa4Tnlcs6lFiBREELHMlj/4+p95MEM7QAJyf/7aJhw2GaMT1LhrIszxJ576cA2gsKOdRVCARSOCS0uXfeoHbhrLPZIOx3nf0mIGsBSroWCNkX1SjeWvtYl9A7Arj5k56TBX1bwazyo/8L1/ZyGW5lbiWoaCiGFyXIeyE7fXOki3vuANgi58WjtKjs7gYzE2Vjz+5h/dG0JpyP1bLxxrIHY6IcV7hRrrI2uMVTGes6VtwWYG3NT2gZWfe9WNh4I7MXRthLo7IYfvHctrrK+qL2lCAJcVKMWux3eGDLFYsuTjL7+lCB65Z1mLZejUSDYe/xJiz+ldyKgQdw1A6i51NLaJDNDKI+/8gc9aXq7f2e4uIDNr7q1zzFCNOSIxbF7TzkK3X884EL1kjO2hM+/9qZ/7UmjsLryris7dbmcPGpFVZc3yS8ZnzlByKxkCGRi1ZOifvv/9x1+8tmAnN0YsffCg9Vw0QxCINndBos3IFlAuRBcQV7be8z137DnOTm8Cy8boAzVWpNSZ8FSOSwejdSvSalIGwAyQtXn2I6+/dTlnXu67pdoaMerNEenCdVEIncNJd9AEuogSjdayxj6WHdnk5o0vlGRd0bna4BIgtfyiJmZWmFg8CQM9ExpoW4nhSJsORNM58NBB87pub605IkqXe0BXTxRZnrlprNVwo1Aqc8pDV9ae7o1j99RnR9ac8OSuYWfXPOgI13vfOnzArCQRSpNF75qK4lkM5e0ga7q8NcIlQJx/3oR1iaKGDx0Z/cG/emXzRAhuCqIysw4zZYj5/e3a9jHUy13GwR2tbquhZd4e0bm/+qHLxprBCgmM8o6ZwTLE4Ucfqa0Roz6bWYAo2052JYlypw6i0LM/dsOKwz7g5h4Add1dMBx8iKrJTagx8Fr1BV16Rnclqxv9AGlF/qpPvLp1PKPZVAFdtXWChMLnO99Yb8CdoswvXjeRuXVZ/TwIIEdxzo03X3GsGRiq2efm1YIOSQP3tALBOgKSdZeiuF1WIOvOD2X7C5O8EYudH71x9WFHzCYZ6yQtmg/s+7Ki1xKQrBtuwOUztAqVjZ4wwWR59Fd+4kfK4w3FydVWqkI41rrTxFos59q5i0vObMVpWUQpHB0HKAq04uxfvPmqI+MDKoPcDIBCDPC9jnoWyNQN14r1m1qNrmCVwonjAhgJMlNx2e/91gVP+BKHOWSASxi8/2jmqCM7VjNcpzW2Ro9Td1dUaD4OQYFCdOUKL/qzn7SRzGRFHkGZNPzVh+G1qN6a4ZoTO7vz8VSI+zlZvRCCgNKWvumWF45N5MiKIA+go3m3aHWo3pqtKpHcflbLKngQBOdjMFXfgAKYQbro/TdtHm0HaHLYYLijJqu5bhcBjGs3TthkIoQgwVHNXCJCoNzzJ28YHLMsRNJDOfTQEZNqiFnVDFeCbCem9a4AZCPThVOTk94Bi8Ov/8SLjx21zIGI/Il7FetYR1G7ZBa1vTNJgZLyQ62ukzrJ9ADf8K6PbB0rcs/IUNxF1eHj132YRXLr2VNekQi6HT00m22kaC0855Y3Dx0JLijc085Zg6yq38xgXLtpwiq8FIw28cRcf5ZAI/jga/7iu06ezEIcemC0lpqF2o1IEbx0EhAq9dM6WNUjdGeOqodRed5v/MHWQ60sO/SQt2uwM2oXVRT17OCqDH5CzvbYHGeHIggweHzOLTcsO5ThNgvwXjvMpGDYsrpNuCiIMtnj1FQD7/QHq39Eul33ie9ttR+oZQtU/dyltGxrO0zuMRacGJnazjB3Py7BUJz7jg89984HQw0lOLWbGYBitqMNnxa0DPtPGVilG5F5fMZH33KgjuepfWahSOLSoagQ6QRlnh05ufRUHzcRosXwQ+725J/muiUzCQRcsrY9PVpdHo6Mn2pKhlcVR0aVpJ58p6juuwsA9OVbJoIbrIpJ5ceOnUqlWgThclomFlnPSWa4IMcV6q7Ubj1+ynKTwAiDsXQi60HuklTQjsFoUW6Am0uPVe/N93kYRCgz1NGJX78DCBi5ft1JA8yrMRlxpHpvvs9X/wsBTi426yW4FcmXby0ZGK1Co0PVYMj0i7zStDyKOwtN5RaAMFJP0PypAhfYscyrYKNEDIxOGOosfVxYuDRsXH9ychs35fnRwwu0sCzRooBy6OKTrJLyRLRjRxkXBG+yduVn5ZjcyEfYycOJJvYuENygpw+XyKqWKLN4EEZfAGmVbE7kho1tn/SKxPg4GCuHX0Cq4czp4LI1eEkznx5gxBEhTIavkHL9UqoZrxkup0+VTynsr1prAMSZ47j7Ay4Ddq4o8qkfs1GvzEQh1OHnLTRcRJ1zQXMKl+dHjlVpMQIlLd2e1GQba2JjZzE1BUVh/Impi6ssQvGb+t1PQbju2BkQJwMaobkfk52P+z8dCiXbv5RslHzDt53VDABAwFqHJEJS+/rRWtL0CwN3SqVSjnM3FNXxBYH9IKKgn73325Glsyfrdu/d4HCIjNrpofISIBwiEFi++R+2r05oZdSf8AQc5nBl9kx3VlazwuNOlXr7p5ZvDOqf1WmCI0PLCMo3r5luvc5GmyqzGz65qrU99I/eFWEPfnxiAAUIrNrSNIiEkB86xuzX/mJlq7EJfbRLTLE8/7N7PvRIDvcyv7w92ZMBOzFmv3PzUrTXXhAbT36ib6HgMtjQr5XvuO5tdyLLfNtQ1d8K2US85feXZ2htWENZn3hEkqIVq99xxslP/ugP/+M4d6wqpsLpg+/+7eWlpM0QaokoLwBcGgMa5fNfcWRV4/Y3ft/7WtsncjenuYfbMrNo3CbV2IydFi4ASPQ3bTzKZcsefc/LHx6SFCQGNkJUaJ+xmSHROpMUcAUy+NJ3Qm0bWD3+lYZT1OQ4LobWuecnmGObDi7hill81vePDUcv8xyqRp2KcpNaF+cx4TraFNXqNM/iT28/zBDa5hKmpvgI5FYR/XR3TaBTS25o0NuN0uBVXbaDCrGx2eooBVw4uCKQeV5e9trRLPesspiJalBV8+wNSJtOqL1YIUIwhPhj3zpmUU4TBEUgmuLGp9U60Cc9XISKe5b98tLCaK7JERk0z4pNSLOGKB3cioh40fVjIUZjlMkIZ4hhe42DxxYSLkC/7upjeS7k8ODRQnRfehEMyVYepoQrg962vIiOSDjNYdZau8bRX6Kqg9b8/LccD5k0eZgRWk9fmjoPmG7dcJmX3/nSw0RGD1EGeXlx8hRvwsV4HvRz5zWtrOpa3TR4kchE2yzTwoXByLj2F5pO0eEIKldtSSyXU0pmUMGv/e6xTNV2BJu4YGVlQCfEnHp12hsvHM9jBgeDX9K9zbP/4BLUirexyERSrm3p68jScpfy577qaPBIoFx64WQLXL/CBQJ5/dbjWZCsvW4da5wI+ZSAC/fhG7MCDju5cWlMXiqYGm5g3P7j4xZEbVWsc4reUwKuaPaay4+b++BWBiSsU1gQuBRi48aBIivO2tS3Bb7TJKdZseVnTuTN9cuRJavJWCC4NHfmrVdfeaS8LC8TJnYXBi5kFpHlN6zyLVyAEu7065c8xNBeez0uqnNk/Kmo9i6xmUTJZLGhl3/1rAXYhZQarlg1d4pvAFBHD+fXptSiylE59FXDbnL+JuYubLpHKDXSqT9/OtEi3L6iWaqu3+HOon6HO8tu63O4s/3pPod7Cu4KhCND05NHy2pCKbgcbYXQvfh1Em41t29VdrSNWM8Mv7RE0I2mg80zz1JnEez0YZbJdE6+/zFk/XDCpWoSyb6wekhdiwe6JhqCW88a+1zp8N5nLylIdmBv9nQpdKohpu+uDLpwc+vfArwf2AsiAreOLH1e9cNMuJTJYvbCxudutWgJy8droih5ptYnT27fJotzRBUAR/A9G1vva+XtBWmcflLJRLbCn39h+GWNyGBzDjMRRKz8Me29qa7ZyCmJjnJg7+/pipfEHIhzDjMAiv6yF8SP/3HDY917cOsiQYDDwVb+xTceX/6mBqWu2e3dQolk9vbN7d99t4CotOVsTxJREkwqbeBzPzmit24rga5J9rMq1lSGx37iET339TsAOVEmDwR/kyTAKAJjH7u57b/y3fDg1ViZeeHC+cQv/acNXbN714r0gbMnBTBjaP/3v//9IzrznddGZXCLHabNgisrQnnzzQeLJeecf/aSrOg17oJlKA499ugoh676+fURYVZJ3iy4jEbo0b/8zP+Olwp1LjGrhwQK5OCqXa/4NhdDpMFPfZirnh7D+O33f/VA0YPCivB86TkXP+MClTkiyWqJ5vTbswCJEKOBMXi7F9lLWQNukdWkOnFGr8MpaomlyQkXC/343yAR1aLmU4XPT1k63Zt6twv1NwZ3EnOP0WQp/Nd+//ShXrQkFuGeznC/xv1cvLv9TItw+5kW4fYzLcLtZ1qE2890msH9P2KKe7KWl1CGAAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDI0LTA2LTA3VDE2OjE4OjU2KzAxOjAwTCf7MAAAACV0RVh0ZGF0ZTptb2RpZnkAMjAyMS0wMi0yNFQxODoyMjozNiswMDowMGiaCQEAAAAASUVORK5CYII=")}));
end FaultInjection_4thrusters;

% author: Davide Grande
% 27/04/2021
%

clear all
close all
clc

%% Parameters setup
csv_results_file = 'Results/res_2_rogue/data/Glider_Lib.Simulations.TestGlider_res.csv'; 
saving_results_path = strcat(pwd, '/Results/res_2_rogue/new_res_28_07_2021');



%% Loading the file
data = readtable(csv_results_file);


%% Reading the data
% Attitude
x = data.genericGlider_mass_explicit_hull_r_0_1_;
y = data.genericGlider_mass_explicit_hull_r_0_2_;
z = data.genericGlider_mass_explicit_hull_r_0_3_;

u = data.genericGlider_mass_explicit_hull_v_0_1_;
v = data.genericGlider_mass_explicit_hull_v_0_2_;
w = data.genericGlider_mass_explicit_hull_v_0_3_;

u_dot = data.genericGlider_mass_explicit_hull_a_0_1_;
v_dot = data.genericGlider_mass_explicit_hull_a_0_2_;
w_dot = data.genericGlider_mass_explicit_hull_a_0_3_;


r = data.genericGlider_mass_explicit_hull_w_a_1_;
q = data.genericGlider_mass_explicit_hull_w_a_2_;
p = data.genericGlider_mass_explicit_hull_w_a_3_;

p_dot = data.genericGlider_mass_explicit_hull_z_a_3_;
q_dot = data.genericGlider_mass_explicit_hull_z_a_2_;
r_dot = data.genericGlider_mass_explicit_hull_z_a_1_;

phi = data.genericGlider_mass_explicit_absoluteAngles_angles_3_;
theta = data.genericGlider_mass_explicit_absoluteAngles_angles_2_;
psi = data.genericGlider_mass_explicit_absoluteAngles_angles_1_;


alpha = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_alpha;
beta = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_beta;
flowspeed = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_flowspeed;


% Actuators data
time = data.time;
m_b = data.genericGlider_mass_explicit_actuators_bodyVariableMass_m;
pos_shifting_mass = data.genericGlider_mass_explicit_actuators_position_slidingMass_fl_1;
rolling_mass_angle = data.genericGlider_mass_explicit_actuators_position_phi;



%% Plotting 

% Trajectories 
figure;
plot3(x,y,z,'linewidth', 1.5);
xlabel('$x$ [m]','Interpreter','Latex');
ylabel('$y$ [m]','Interpreter','Latex');
zlabel('$z$ [m]','Interpreter','Latex');
set(gca,'TickLabelInterpreter','Latex');
title('Trajectory')
grid on;
set(gcf,'color','w');


% figure;
% plot(x,y,'linewidth', 1.5);
% xlabel('$x$ [m]','Interpreter','Latex');
% ylabel('$y$ [m]','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Trajectory: x-y plane')
% grid on;
% set(gcf,'color','w');
% 
% figure;
% plot(x,z,'linewidth', 1.5);
% xlabel('$x$ [m]','Interpreter','Latex');
% ylabel('$z$ [m]','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Trajectory: x-z plane')
% grid on;
% set(gcf,'color','w');
% 
% 
% display('Radii (x,y) = ')
% (abs(max(x)) + abs(min(x))) / 2
% (abs(max(y)) + abs(min(y))) / 2
% 
% 
% % Angles 
% figure;
% plot(time, rad2deg(alpha),'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$\alpha [deg]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Angle of attack','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');
% 
% figure;
% plot(time, rad2deg(beta),'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$\beta [deg]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Sideslip angle','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');
% 
% figure;
% plot(time, flowspeed,'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$V [m/s]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('flowspeed','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');
% 
% 
% 
% 
% figure
% subplot(3,1,1)
% plot(time,rad2deg(phi),'-');
% grid on
% title('EA')
% subplot(3,1,2)
% plot(time,rad2deg(theta),'-');
% grid on
% subplot(3,1,3)
% plot(time,rad2deg(psi),'-');
% grid on
% xlabel('Time [s]','Interpreter','Latex');
% ylabel('Angle [$^\circ$]','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% grid on;
% set(gcf,'color','w');
% sgtitle('Euler angles','Interpreter','Latex');
% 
% 
% 
% 
% 
% 
% figure
% subplot(3,1,1)
% plot(time,p,'-');
% grid on
% title('phi dot')
% subplot(3,1,2)
% plot(time,q,'-');
% grid on
% title('theta dot')
% subplot(3,1,3)
% plot(time,r,'-');
% grid on
% title('psi dot')
% xlabel('Time [s]','Interpreter','Latex');
% ylabel('[$^rad/s$]','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% grid on;
% set(gcf,'color','w');
% sgtitle('Angular rates','Interpreter','Latex');
% 
% 
% 
% 
% % Actuators
% figure;
% plot(time,m_b,'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$m_b [kg]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Variable Buoyancy System -- input','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');
% 
% 
% figure;
% plot(time, pos_shifting_mass,'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$pos_s [m]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Position of shifting mass -- input','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');
% 
% 
% figure;
% plot(time, rolling_mass_angle.*180/pi,'linewidth', 1.5);
% xlabel('$time [s]$','Interpreter','Latex');
% ylabel('$ [deg]$','Interpreter','Latex');
% set(gca,'TickLabelInterpreter','Latex');
% title('Position of rolling mass -- input','Interpreter','Latex')
% grid on;
% set(gcf,'color','w');


%% Saving results
saveOpenFigures_v3(saving_results_path, pwd, true);

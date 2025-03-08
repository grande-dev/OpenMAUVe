% author: Davide Grande
% 27/04/2021
%

clear all
close all
clc

%% Parameters setup
csv_results_file = 'NavigationROGUE_4/NavigationROGUE_res.csv'; 
saving_results_path = strcat(pwd, '/Results/NavigationROGUE_4');



%% Loading the file
data = readtable(csv_results_file);


%% Reading the data
% Attitude
x = data.gliderROGUE_out_pos_body_wrt_NED_in_NED_1_;
y = data.gliderROGUE_out_pos_body_wrt_NED_in_NED_2_;
z = data.gliderROGUE_out_pos_body_wrt_NED_in_NED_3_;


x_ECI = data.gliderROGUE_out_pos_ECI_1_;
y_ECI = data.gliderROGUE_out_pos_ECI_2_;
z_ECI = data.gliderROGUE_out_pos_ECI_3_;

x_NED = data.gliderROGUE_positionAttitudeAndDer_pos_NED_wrt_ECI_in_ECI_1_;
y_NED = data.gliderROGUE_positionAttitudeAndDer_pos_NED_wrt_ECI_in_ECI_2_;
z_NED = data.gliderROGUE_positionAttitudeAndDer_pos_NED_wrt_ECI_in_ECI_3_;



u = data.gliderROGUE_out_lin_vel_body_1_;
v = data.gliderROGUE_out_lin_vel_body_2_;
w = data.gliderROGUE_out_lin_vel_body_3_;

% u_dot = data.genericGlider_mass_explicit_hull_a_0_1_;
% v_dot = data.genericGlider_mass_explicit_hull_a_0_2_;
% w_dot = data.genericGlider_mass_explicit_hull_a_0_3_;


r = data.gliderROGUE_out_ang_vel_ome_1_;
q = data.gliderROGUE_out_ang_vel_ome_2_;
p = data.gliderROGUE_out_ang_vel_ome_3_;

% p_dot = data.genericGlider_mass_explicit_hull_z_a_3_;
% q_dot = data.genericGlider_mass_explicit_hull_z_a_2_;
% r_dot = data.genericGlider_mass_explicit_hull_z_a_1_;

% phi = data.genericGlider_mass_explicit_absoluteAngles_angles_3_;
% theta = data.genericGlider_mass_explicit_absoluteAngles_angles_2_;
% psi = data.genericGlider_mass_explicit_absoluteAngles_angles_1_;
% 
% 
% alpha = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_alpha;
% beta = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_beta;
% flowspeed = data.genericGlider_mass_explicit_hydrodynamicForcesTorques_flowspeed;


% Actuators data
time = data.time;
% m_b = data.genericGlider_mass_explicit_actuators_bodyVariableMass_m;
% pos_shifting_mass = data.genericGlider_mass_explicit_actuators_position_slidingMass_fl_1;
% rolling_mass_angle = data.genericGlider_mass_explicit_actuators_position_phi;



%% Plotting 
% ark green color
darkGreen = [0, 0.5, 0];


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


figure;
plot3(x_ECI,y_ECI,z_ECI,'linewidth', 2.5);
hold on 
plot3(x_NED,y_NED,z_NED,'--r','linewidth', 3.0);
hold on 
quiver3(0,0,0, 1500,0,0, 'Color', darkGreen, 'LineWidth', 3, 'MaxHeadSize', 2); % X-axis (red)
quiver3(0,0,0, 0,1500,0, 'Color', darkGreen, 'LineWidth',3, 'MaxHeadSize', 2); % Y-axis (green)
quiver3(0,0,0, 0,0,1500, 'Color', darkGreen, 'LineWidth',3, 'MaxHeadSize', 2); % Z-axis (blue)
% Add 'ECI' label near the origin
text(-300, -500, 10, 'ECI', 'Color', darkGreen, 'FontSize', 14, 'FontWeight', 'bold');
xlabel('$x$ [m]','Interpreter','Latex');
ylabel('$y$ [m]','Interpreter','Latex');
zlabel('$z$ [m]','Interpreter','Latex');
set(gca,'TickLabelInterpreter','Latex');
legend('AUV trajectory', 'NED tern')
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

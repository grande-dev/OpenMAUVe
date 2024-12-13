function [fig_handle] = plotFaultsResolved(pos_y, pos_x, pos_z, radius_faults, alpha_value_faults, rgb_faults_resolved, visibility, name_display)
    %A function to plot a red asterisc in the location of a fault
    %   Detailed explanation goes here

    if visibility
        p1 = plot3(pos_y, pos_x, pos_z, 'r.', 'markers', radius_faults, 'Color', rgb_faults_resolved, 'HandleVisibility', 'on','DisplayName',name_display);
    else
        p1 = plot3(pos_y, pos_x, pos_z, 'r.', 'markers', radius_faults, 'Color', rgb_faults_resolved, 'HandleVisibility', 'on');
    end 
    
    hold on;
    fig_handle = p1;
end
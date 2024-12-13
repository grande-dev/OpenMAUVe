function [fig_handle] = plotFaults(pos_y, pos_x, pos_z, fault_num, radius_faults, alpha_value_faults, rgb_faults, visibility, name_disp)
    %A function to plot a red asterisc in the location of a fault
    %   Detailed explanation goes here
    
    if visibility
        p1 = plot3(pos_y, pos_x, pos_z, 'r.', 'markers', radius_faults, 'HandleVisibility', 'on','DisplayName',name_disp);
    else
        p1 = plot3(pos_y, pos_x, pos_z, 'r.', 'markers', radius_faults, 'HandleVisibility', 'on');
    end

    hold on;
    fig_handle = p1;
end
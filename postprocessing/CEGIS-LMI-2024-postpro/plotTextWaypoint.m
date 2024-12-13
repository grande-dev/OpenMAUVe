function S = plotTextWaypoint(x_wp, y_wp, z_wp, radius_waypoint, alpha_value, rgb_waypoints, is_origin)
    %UNTITLED2 Summary of this function goes here
    %   Detailed explanation goes here
    
    num_spheres = numel(x_wp);
    S = gobjects(num_spheres, 1);

    for iS=1:num_spheres
        % Make unit sphere
        [x,y,z] = sphere;
        % Scale to desire radius.
        radius = radius_waypoint;
        x = x * radius;
        y = y * radius;
        z = z * radius;

        if is_origin

            t = text(radius,radius,z_wp(iS), ...
                num2str(0 + ", 8"), ... % Incremental number as text
                'FontSize', 12, ... % Set font size
                'Color', 'black', ... % Text color
                'FontWeight', 'bold'); % Bold font for visibility
            uistack(t, 'top');
        else

            if (iS ~= 1 && iS ~=7)
                t = text(x_wp(iS) + radius, y_wp(iS) + radius, z_wp(iS), ...
                    num2str(iS), ... % Incremental number as text
                    'FontSize', 12, ... % Set font size
                    'Color', 'black', ... % Text color
                    'FontWeight', 'bold'); % Bold font for visibility
                uistack(t, 'top');

            elseif (iS == 1)
                t = text(x_wp(iS) + radius, y_wp(iS) + radius, z_wp(iS), ...
                    num2str(iS+", 7"), ... % Incremental number as text
                    'FontSize', 12, ... % Set font size
                    'Color', 'black', ... % Text color
                    'FontWeight', 'bold'); % Bold font for visibility  
                uistack(t, 'top');
            end 
            
            % shading flat;
        end
    end
    axis equal;
end
function [fig_handle] = plotWaypoint(x_wp, y_wp, z_wp, radius_waypoint, gamma, alpha_value, rgb_waypoints, is_origin)
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
        % Translate sphere to new location.
        % offset = 6500000;
        % Plot as surface.

        % surf(x+x_wp(iS),y+y_wp(iS),z+z_wp(iS)) 
        
        % Label axes.
        % xlabel('X', 'FontSize', 20);
        % ylabel('Y', 'FontSize', 20);
        % zlabel('Z', 'FontSize', 20);
        if is_origin

            S(iS) = scatter3(x_wp(iS),y_wp(iS),z_wp(iS), radius_waypoint, 'MarkerFaceColor', rgb_waypoints, 'HandleVisibility', 'on', ...
                'MarkerFaceAlpha', alpha_value, 'MarkerEdgeAlpha', alpha_value);
            fig_handle = S(iS);
            % S(iS) = surf(x+x_wp(iS),y+y_wp(iS),z+z_wp(iS), ...
            %     'FaceAlpha', alpha_value, ...
            %     'FaceColor', rgb_waypoints, ...
            %     'EdgeColor','none', 'HandleVisibility', 'off');
            t = text(x_wp(iS)+gamma,y_wp(iS)+gamma,z_wp(iS), ...
                num2str(0 + ", 8"), ... % Incremental number as text
                'FontSize', 12, ... % Set font size
                'Color', 'black', ... % Text color
                'FontWeight', 'bold'); % Bold font for visibility
            uistack(t, 'top');


            % shading flat;

        else
            S(iS) = scatter3(x_wp(iS),y_wp(iS),z_wp(iS), radius_waypoint, 'MarkerFaceColor', rgb_waypoints, 'HandleVisibility', 'on', ...
                'MarkerFaceAlpha', alpha_value, 'MarkerEdgeAlpha', alpha_value,'DisplayName', 'waypoint');

            % S(iS) = surf(x+x_wp(iS),y+y_wp(iS),z+z_wp(iS), ...
            %     'FaceAlpha', alpha_value, ...
            %     'FaceColor',rgb_waypoints, ...
            %     'EdgeColor','none', 'HandleVisibility', 'off', 'DisplayName', 'waypoint');
            %     % Add incremental number next to each sphere

            if iS == 1
                fig_handle = S(iS);
            end 

            if (iS ~= 1 && iS ~=7)
                t = text(x_wp(iS) +gamma, y_wp(iS) +gamma, z_wp(iS), ...
                    num2str(iS), ... % Incremental number as text
                    'FontSize', 12, ... % Set font size
                    'Color', 'black', ... % Text color
                    'FontWeight', 'bold'); % Bold font for visibility
                uistack(t, 'top');

            elseif (iS == 1)
                t = text(x_wp(iS) +gamma, y_wp(iS) +gamma, z_wp(iS), ...
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
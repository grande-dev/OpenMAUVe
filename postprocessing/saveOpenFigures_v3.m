function saveOpenFigures_v2(desiredFolderName, currentFolder, additionallySavePng)
%%SAVEOPENFIGURES saves by default all the open figures as a .fig\
%
%   How to use me: 
%       0) input params: desiredFolderName, currentFolder, additionallySavePng
%       1) be sure that desiredFolderName is the full path to the place
%           where the fig needs to be stored
%       2) set additionallySavePng = true if you desire the figures to be
%           saved as .png as well
%
%       
%   CAVEAT: All the open figures need to have a title!
%	    Figures with subplot need to have a supertitle as well.
%		To set it up, use the function: 
%		sgtitle('your title','Interpreter','Latex');
% 		
%
%
%    original author: Davide Grande
%    date: 27th March 2020
%    contact: davide.grande.19@ucl.ac.uk
%

    FigList = findobj(allchild(0), 'flat', 'Type', 'figure');
    for iFig = 1:length(FigList)
        FigHandle = FigList(iFig);
        disp(FigHandle)

        % extracting the title
        FigName = FigHandle.Children(end).Title.String
        FigName
        
        % cleaning string
        FigName = FigName(find(~isspace(FigName))); % removing spaces
        FigName = regexprep(FigName, '[/,-]', ''); %remove possible '/'

        set(0, 'CurrentFigure', FigHandle);
        savefig(fullfile(desiredFolderName, [FigName '.fig']));

        % if it is requested to save the fig as a .png
        if additionallySavePng
            h = openfig(strcat(desiredFolderName,'/', FigName, '.fig'));
            cd (desiredFolderName);
            saveas(h, [FigName '.png']);
            saveas(h, [FigName '_bw.eps']);
            
            % no title - colored .eps version 
            h.Children(end).Title.String = ' ';
            print(h, [FigName '.eps'], '-depsc2'); 
            
            
            close(h);
            cd (currentFolder);
        end

    end


end


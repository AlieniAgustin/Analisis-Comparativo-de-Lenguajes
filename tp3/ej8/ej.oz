local Loop5 in
   Loop5 = proc{$I}
	      local C in
		 C = I == 5
		 if C then
		    skip
		 else
		    local J in
		       J = I + 5
		       {Browse J}
		       {Loop5 J}
		    end
		 end
	      end
	   end
   local A in
      A = 0 - 5
      {Loop5 A}
   end
end

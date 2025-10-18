local X in
   local C in
      local Y in
	 Y = 1
	 local A in
	    A = 0
	    {NewCell A C}
	    {Exchange C X Y}
	    local B in
	       {Exchange C B B}
	       {Browse B}
	       {Browse X}
	    end
	 end
      end
   end
end

	    
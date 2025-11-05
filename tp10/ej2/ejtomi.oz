local X Y R in
   X = 1
   thread
      local R in
	 P = proc{$}
		Y = X
		R = X + 1
	     end
      end
   in
      {P}
   end
   thread
      local R in
	 T = proc{$}
		R = Y
	     end
      end
   in
      {T}
   end
   {Browse X}
   {Browse Y}
   {Browse R}
end

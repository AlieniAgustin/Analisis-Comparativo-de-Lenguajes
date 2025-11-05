local X, Y in
   X = 1
   thread
      Y = X
      X + 1
   end
   thread Y end
   {Browse X Y}
end


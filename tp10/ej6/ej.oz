local X Y1 Y2 C L in
   C = {NewCell Nil}
   L = {NewLock}
   thread X = 1 lock L then C := X|@C end Y1 = 'listo' end
   thread lock L then C := 2|@C end Y2 = 'listo' end
   {Barrier Y1 Y2}
   {Browse @C}
end

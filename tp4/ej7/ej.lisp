(defun myLength (xs)
  (if (null xs)
    0
    (+ 1 (myLength (cdr xs)))))



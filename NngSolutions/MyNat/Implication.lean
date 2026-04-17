import NngSolutions.MyNat.Multiplication

namespace MyNat

example  (x y z : MyNat) (h1 : x + y = 37) (h2 : 3 * x + z = 42) : x + y = 37 := by
  exact h1

example (x y : MyNat) (h: 0 + x = 0 + y + 2) : x = y + 2 := by
  repeat rw[zero_add] at h
  exact h

example (x y : MyNat) (h1 : x = 37) (h2 : x = 37 -> y = 42) : y = 42 :=
  h2 h1

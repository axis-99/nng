import NngSolutions.MyNat.Multiplication

namespace MyNat

example  (x y z : MyNat) (h1 : x + y = 37) (h2 : 3 * x + z = 42) : x + y = 37 := by
  exact h1

example (x y : MyNat) (h: 0 + x = 0 + y + 2) : x = y + 2 := by
  repeat rw[zero_add] at h
  exact h

example (x y : MyNat) (h1 : x = 37) (h2 : x = 37 -> y = 42) : y = 42 :=
  h2 h1

example (x : MyNat) (h : x + 1 = 4) : x = 3 := by
  rw [← succ_eq_add_one, four_eq_succ_three] at h
  injection h

example (x : MyNat) : x = 37 -> x = 37 := by
  intro h
  exact h

example (x y : MyNat) : x + 1 = y + 1 -> x = y := by
  intro h
  apply succ_inj
  repeat rw[succ_eq_add_one]
  exact h

example (x y : MyNat) (h1 : x = y) (h2 : x ≠ y) : False := by
  exact h2 h1

theorem zero_ne_one : (0 : MyNat) ≠ 1 := by
  intro h
  rw [one_eq_succ_zero] at h
  exact absurd h (zero_ne_succ 0)

theorem one_ne_zero : (1: MyNat) ≠ 0 := by
  symm
  exact zero_ne_one

example : MyNat.succ (.succ 0) + .succ (.succ 0) ≠ .succ (.succ (.succ (.succ (.succ 0)))) := by
  intro h
  simp [add_succ, add_zero] at h
  injection h

end MyNat

import NngSolutions.MyNat.Addition

namespace MyNat

-- Level 1
theorem mul_one (m : MyNat) : m * 1 = m := by
  rw [one_eq_succ_zero, mul_succ, mul_zero, zero_add]

-- Level 2
theorem zero_mul (m : MyNat) : 0 * m = 0 := by
  induction m with
  | zero => rfl
  | succ d hd => rw[mul_succ, add_zero, hd]

-- Level 3
theorem succ_mul (a b : MyNat) : .succ a * b = a * b + b := by
  induction b with
  | zero => show .succ a * 0 = a * 0 + 0; rw[mul_zero, mul_zero, add_zero]
  | succ d hd => rw[mul_succ, add_succ, add_succ, hd, mul_succ, add_right_comm]

end MyNat

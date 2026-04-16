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

-- Level 4
theorem mul_comm (a b : MyNat) : a * b = b * a := by
  induction b with
  | zero => show a * 0 = 0 * a; rw[mul_zero, zero_mul]
  | succ d hd => rw[succ_mul, mul_succ, hd]

-- Level 5
theorem one_mul (m : MyNat) : 1 * m = m := by
  rw[mul_comm, mul_one]

-- Level 6
theorem two_mul (m : MyNat) : 2 * m = m + m := by
  rw[two_eq_succ_one, succ_mul, one_mul]

-- Level 7
theorem mul_add (a b c : MyNat) : a * (b + c) = a * b + a * c := by
  induction c with
  | zero => show a * (b + 0) = a * b + a * 0; rw [add_zero, mul_zero, add_zero]
  | succ d hd => rw [add_succ, mul_succ, hd, mul_succ, add_assoc]

-- Level 8
theorem add_mul (a b c : MyNat) : (a + b) * c = a * c + b * c := by
    rw[mul_comm, mul_comm a c, mul_comm b c, mul_add]

-- Answer
-- rw[mul_comm, mul_add]
-- repeat rw[mul_comm c]

-- Level 9
theorem mul_assoc (a b c : MyNat) : a * b * c = a * (b * c) := by
  induction c with
  | zero => rfl
  | succ d hd => rw [mul_succ, mul_succ, mul_add, hd]

end MyNat

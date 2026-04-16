import NngSolutions.MyNat.Definitions

namespace MyNat

-- Level 1
theorem zero_add (a : MyNat) : 0 + a = a := by
  induction a with
  | zero => rw [add_zero]
  | succ d hd => rw [add_succ, hd]

-- Level 2
theorem succ_add (a b : MyNat) : .succ a + b = .succ (a + b) := by
  induction b with
  | zero => rw [add_zero, add_zero]
  | succ d hd => rw [add_succ, add_succ, hd]

-- Level 3
theorem add_comm (a b : MyNat) : a + b = b + a := by
  induction b with
  | zero => rw [add_zero, zero_add]
  | succ d hd => rw [add_succ, succ_add, hd]

-- Level 4
theorem add_assoc (a b c : MyNat) : a + b + c = a + (b + c) := by
  induction a with
  | zero => rw [zero_add, zero_add]
  | succ d hd => rw [succ_add, succ_add, succ_add, hd]

-- Level 5
theorem add_right_comm (a b c : MyNat) : a + b + c = a + c + b := by
  rw [add_assoc, add_comm b c, ← add_assoc]

end MyNat

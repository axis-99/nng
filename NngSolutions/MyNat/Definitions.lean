namespace MyNat

inductive MyNat where
  | zero : MyNat
  | succ : MyNat → MyNat
  deriving Repr

def ofNat : Nat → MyNat
  | 0 => .zero
  | n + 1 => .succ (ofNat n)

instance (n : Nat) : OfNat MyNat n := ⟨ofNat n⟩

def add : MyNat → MyNat → MyNat
  | a, .zero => a
  | a, .succ b => .succ (add a b)

instance : Add MyNat := ⟨add⟩

def mul : MyNat → MyNat → MyNat
  | _, .zero => .zero
  | a, .succ b => mul a b + a

instance : Mul MyNat := ⟨mul⟩

-- NNG の "axioms" に相当する基本補題
theorem add_zero (a : MyNat) : a + 0 = a := rfl
theorem add_succ (a b : MyNat) : a + .succ b = .succ (a + b) := rfl
theorem mul_zero (a : MyNat) : a * 0 = 0 := rfl
theorem mul_succ (a b : MyNat) : a * .succ b = a * b + a := rfl
theorem succ_eq_add_one (n : MyNat) : .succ n = n + 1 := rfl
theorem one_eq_succ_zero : (1 : MyNat) = .succ 0 := rfl
theorem two_eq_succ_one : (2: MyNat) = .succ 1 := rfl
theorem three_eq_succ_two : (3: MyNat) = .succ 2 := rfl
theorem four_eq_succ_three : (4: MyNat) = .succ 3 := rfl

theorem succ_inj {a b : MyNat} (h : MyNat.succ a = MyNat.succ b) : a = b := by
  injection h

theorem zero_ne_succ (n : MyNat) : MyNat.zero ≠ .succ n := by
  intro h
  injection h

end MyNat

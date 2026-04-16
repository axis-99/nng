namespace MyNat

inductive MyNat where
  | zero : MyNat
  | succ : MyNat → MyNat
  deriving Repr

instance : OfNat MyNat 0 := ⟨.zero⟩
instance : OfNat MyNat 1 := ⟨.succ .zero⟩
instance : OfNat MyNat 2 := ⟨.succ (.succ .zero)⟩

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
theorem one_eq_succ_zero : (1 : MyNat) = .succ 0 := rfl
theorem two_eq_succ_one : (2: MyNat) = .succ 1 := rfl

end MyNat

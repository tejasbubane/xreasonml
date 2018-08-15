let square = n =>
  switch (n) {
  | n when n > 0 && n <= 64 => Some(1 lsl (n - 1))
  | _ => None
  };
let total = () => 18446744073709551615.0;

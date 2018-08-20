def reverse(x)
  reversed_x = '0'
  is_negative = (x < 0) ? true : false
  x = x.abs

  while x > 0
    y = x % 10
    reversed_x += y.to_s
    x = (x - y) / 10
  end
  reversed_x = reversed_x.to_i

  return reversed_x = 0 if reversed_x > ((2 ** 31) - 1) or reversed_x < -(2 ** 31)
  is_negative == false ? reversed_x : -reversed_x
end

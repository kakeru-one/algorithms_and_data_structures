n = gets.to_i
numbers = gets.split.map(&:to_i)

res = 0

loop do
  exist_odd = numbers.any? { _1.odd? }

  break if exist_odd

  numbers.map! { _1 / 2 }
  res += 1
end

puts res
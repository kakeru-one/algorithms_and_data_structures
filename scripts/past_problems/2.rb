# 文字列から改行文字を取り除く。
# https://docs.ruby-lang.org/ja/latest/method/String/i/chomp.html
s = $stdin.gets.chomp

counter = 0

# ref: https://docs.ruby-lang.org/ja/latest/method/String/i/chars.html
s.chars.each_with_index do |char, i|
  break if i >= 3
  counter += 1 if char == '1'
end

puts counter
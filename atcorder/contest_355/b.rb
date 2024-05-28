# 標準入力をすべて読み取る
input = $stdin.read

# 読み取ったデータを行ごとに分割
lines = input.split("\n")

# 1行目をNとMに分割
N, M = lines[0].split.map(&:to_i)

# 2行目と3行目をそれぞれaとbに分割して格納
a = lines[1].split.map(&:to_i)
b = lines[2].split.map(&:to_i)

def has_consecutive_numbers(arr)
  arr.sort!

  # 隣接する要素をチェックする
  (0...arr.size - 1).each do |i|
    if arr[i] + 1 == arr[i + 1]
      return 'Yes'
    end
  end
  return 'No'
end

puts has_consecutive_numbers(a)
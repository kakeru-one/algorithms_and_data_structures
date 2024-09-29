package main

import (
	"fmt"
	"strconv"
)

func main() {
	var S string
	var T string

	fmt.Scanf("%s", &S)
	fmt.Scanf("%s", &T)

	// タイピング位置
	// Slice: https://qiita.com/k-penguin-sato/items/daad9986d6c42bdcde90
	var positions []int

	byte_S := []byte(S)
	byte_T := []byte(T)

	// Range: https://go-tour-jp.appspot.com/moretypes/16
	for index, b := range byte_S {
		for j := range byte_T {
			if b == T[j] {
				positions = append(positions, index+1)
				break
			}
		}
	}

	for index, pos := range positions {
		if 0 < index && index < len(positions) {
			fmt.Print(" ")
		}
		fmt.Print(strconv.Itoa(pos))
	}
	fmt.Println()
}

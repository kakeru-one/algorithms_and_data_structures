package main

import (
	"fmt"
)

func main() {
	var n, x, y, z int
	fmt.Scanf("%d %d %d %d", &n, &x, &y, &z)
	if x >= y {
		if z < x && z >= y {
			fmt.Println("Yes")
		} else {
			fmt.Println("No")
		}
	} else {
		if z < y && z >= x {
			fmt.Println("Yes")
		} else {
			fmt.Println("No")
		}
	}
}

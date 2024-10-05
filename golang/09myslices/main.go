package main

import (
	"fmt"
	"sort"
)

func main() {
	fmt.Println("Welcome to slices in GoLang")

	var vegList = []string{"potato", "beans", "mushroom"}
	fmt.Println("Type of vegList is %T\n", vegList)
	fmt.Println("Old Vegy list is: ", vegList)

	vegList = append(vegList, "carrot", "spinach")
	fmt.Println("New Vegy list is: ", vegList)

	vegList = append(vegList[1:3])
	fmt.Println("New Vegy list is: ", vegList)

	highScores := make([]int, 4)

	highScores[0] = 234
	highScores[1] = 945
	highScores[2] = 465
	highScores[3] = 867
	// highScores[4] = 845	//crash out of bound

	highScores = append(highScores, 51, 74)  //resize and assign

	fmt.Println(highScores)

	sort.Ints(highScores)	// sorts slice
	fmt.Println(highScores)
	fmt.Println(sort.IntsAreSorted(highScores))	/// checks if sorted or not

	// how to remove a value from slices based on index
	var courses = []string{"Java","C++","ReactJS","GoLang"}
	fmt.Println(courses)
	var index int = 2
	courses = append(courses[:index],courses[index+1:]...)
	fmt.Println(courses)

	
}

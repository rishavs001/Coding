package main

import "fmt"

func main() {
	fmt.Println("Loops in golang")

	days := []string{"sunday", "Tuesday", "Wednesday"}
	fmt.Println(days)

	for i := 0; i < len(days); i++ {
		fmt.Println(days[i])
	}

	for ii := range days {
		fmt.Println(days[ii])
	}
	for index, day := range days {
		fmt.Printf("index is %v and value is %v\n", index, day)
	}
	for _, day := range days {
		fmt.Printf("index is v and value is %v\n", day)
	}
	for day := range days {
		fmt.Printf(" value is %v\n", day)
	}

	vall := 1
	for vall < 10 {
		if vall == 2 {
			goto lco
		}

		if vall == 5 {
			vall++
			continue
		}
		if vall == 7 {
			break
		}

		fmt.Println(vall)
		vall++
	}

lco:
	fmt.Println("Jumping at ab.com")
}

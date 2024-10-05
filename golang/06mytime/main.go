package main

import (
	"fmt"
	"time"
)

func main() {
	fmt.Println("Welcome to time study of GoLang")

	presentTime := time.Now()
	fmt.Println(presentTime)

	fmt.Println(presentTime.Format("01-02-2006 15:04:05 Monday")) // this is  the default format date/time  that should be used

	createdDate := time.Date(2020, time.August, 10, 23, 23, 0, 0, time.UTC)
	fmt.Println("Created date is: ", createdDate)
	fmt.Println(createdDate)
	fmt.Println(createdDate.Format("01-02-2006 Monday"))

}

 

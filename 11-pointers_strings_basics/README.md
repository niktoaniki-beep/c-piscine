# 📁 11-pointers_strings_basics

## 🎯 Objective

Today I worked on pointers applied to strings.

The goal was to understand how a string is stored in memory and how to manipulate it using pointers only, without using indexing ([]).

---

## 🧠 What I learned

- A string is a sequence of characters ending with '\0'
- char *str points to the first character of the string
- *str gives the current character
- str++ moves to the next character in memory
- while (*str) is used to loop through a string
- Characters can be compared using *str == c
- Multiple pointers can be used together (e.g., comparing two strings)

---

## 🔧 Functions implemented

- ft_putstr → print a string
- ft_strlen → count the length of a string
- ft_first_char → return the first character
- ft_second_char → return the second character
- ft_last_char → return the last character
- ft_putstr_until → print until a specific character
- ft_count_char → count occurrences of a character
- ft_strcmp → compare two strings

---

##  Difficulties

- Understanding the difference between str and *str
- Knowing when to stop at '\0'
- Understanding that return stops the function immediately
- Handling loop conditions correctly

---

## 🚀 Conclusion

I now have a solid understanding of pointers with strings.

I am able to:
- read a string from memory
- iterate through characters using pointers
- compare and count values
- use multiple pointers together

Next step: reinforce logic and move to more advanced pointer manipulation.


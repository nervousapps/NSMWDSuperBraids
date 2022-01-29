#include <Arduino.h>
#include "wordlist.h"
// This file is autogenerated by running `ruby ./words/words.rb`

const unsigned char data[] = {
26, 30, 42, 2, 16, 32, 14, 4, 2, 14, 1, 16, 7, 18, 2, 17, 8, 16, 2, 17, 9, 18, 1, 17, 1, 16, 2, 15, 1, 14, 1, 13, 4, 12, 2, 73, 1, 70, 5, 66, 1, 60, 1, 54, 1, 48, 1, 42, 6, 36, 1, 35, 1, 34, 1, 33, 1, 32, 11, 30, 4, 29, 4, 28, 2, 93, 1, 92, 5, 91, 1, 94, 1, 98, 1, 102, 1, 106, 6, 110, 1, 106, 1, 102, 1, 97, 1, 93, 8, 88, 1, 87, 1, 86, 1, 85, 1, 84, 1, 83, 1, 82, 1, 81, 4, 80, 41, 98, 2, 0, 1, 4, 9, 13, 8, 11, 2, 13, 11, 15, 4, 13, 4, 11, 2, 0, 1, 3, 5, 11, 1, 9, 1, 8, 1, 6, 1, 5, 7, 4, 1, 5, 1, 6, 1, 8, 9, 9, 2, 8, 2, 6, 2, 5, 4, 4, 2, 0, 1, 2, 6, 4, 1, 3, 2, 2, 10, 1, 19, 0, 2, 124, 39, 0, // hello
52, 76, 60, 2, 44, 56, 42, 2, 8, 18, 2, 17, 8, 16, 2, 17, 2, 18, 1, 16, 1, 14, 1, 12, 1, 10, 1, 8, 9, 6, 6, 18, 2, 19, 3, 20, 1, 16, 1, 11, 6, 6, 1, 8, 1, 11, 3, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 6, 66, 1, 60, 1, 54, 1, 48, 1, 42, 6, 36, 1, 42, 1, 48, 1, 54, 1, 60, 2, 66, 1, 69, 1, 72, 1, 75, 1, 78, 1, 81, 1, 84, 1, 83, 1, 81, 6, 79, 4, 50, 1, 49, 1, 48, 1, 47, 1, 46, 3, 44, 1, 47, 1, 50, 6, 54, 1, 60, 1, 66, 3, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 6, 91, 1, 94, 1, 98, 1, 102, 1, 106, 6, 110, 1, 107, 1, 103, 1, 99, 1, 95, 3, 91, 2, 92, 2, 93, 1, 94, 1, 96, 1, 98, 6, 101, 4, 60, 1, 65, 1, 71, 1, 77, 1, 83, 3, 89, 1, 99, 1, 110, 6, 121, 1, 112, 1, 103, 8, 93, 8, 94, 73, 98, 10, 13, 10, 11, 2, 13, 1, 9, 1, 6, 1, 4, 1, 3, 1, 2, 9, 0, 11, 9, 1, 8, 1, 6, 6, 5, 1, 6, 1, 8, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 6, 11, 1, 9, 1, 8, 1, 6, 1, 5, 6, 4, 1, 5, 1, 6, 1, 8, 1, 9, 2, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 9, 0, 8, 6, 12, 5, 1, 6, 3, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 7, 4, 1, 3, 2, 2, 6, 1, 2, 2, 2, 3, 3, 4, 1, 3, 3, 2, 9, 0, 4, 3, 3, 2, 1, 1, 11, 0, 2, 2, 3, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 73, 0, // electronic
34, 34, 34, 2, 32, 34, 12, 6, 9, 18, 1, 19, 1, 21, 1, 22, 1, 24, 10, 26, 1, 21, 1, 16, 1, 11, 7, 6, 1, 12, 1, 19, 7, 26, 1, 21, 1, 16, 1, 11, 6, 6, 9, 50, 1, 48, 1, 46, 1, 44, 1, 42, 10, 40, 1, 37, 1, 33, 1, 30, 7, 26, 1, 30, 1, 35, 7, 40, 1, 46, 1, 53, 1, 59, 6, 66, 9, 60, 1, 65, 1, 71, 1, 77, 1, 83, 10, 89, 1, 87, 1, 85, 1, 83, 7, 81, 1, 83, 1, 86, 7, 89, 1, 97, 1, 105, 1, 113, 6, 121, 51, 98, 10, 9, 2, 11, 1, 13, 10, 15, 1, 9, 1, 5, 1, 3, 5, 2, 2, 0, 1, 3, 1, 6, 7, 15, 1, 9, 1, 4, 1, 2, 6, 0, 10, 6, 2, 8, 1, 9, 10, 11, 1, 6, 1, 4, 1, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 4, 7, 11, 1, 6, 1, 4, 1, 2, 6, 0, 10, 3, 3, 2, 13, 1, 9, 0, 10, 1, 6, 0, 47, 0, 2, 25, 2, 0, // robot
12, 12, 12, 2, 6, 10, 2, 2, 3, 8, 1, 11, 1, 14, 1, 17, 1, 20, 29, 24, 3, 82, 1, 78, 1, 74, 1, 70, 1, 66, 29, 62, 3, 110, 1, 106, 1, 102, 1, 97, 1, 93, 29, 88, 36, 98, 5, 11, 2, 13, 29, 15, 4, 6, 1, 8, 1, 9, 1, 11, 29, 13, 36, 4, 36, 0, // yaaaah
32, 32, 32, 34, 22, 20, 18, 4, 2, 14, 1, 20, 10, 26, 1, 25, 1, 24, 1, 23, 1, 22, 1, 21, 1, 20, 6, 18, 1, 14, 1, 10, 1, 6, 1, 10, 1, 14, 9, 18, 2, 73, 1, 57, 10, 40, 1, 41, 1, 42, 1, 44, 1, 45, 1, 47, 1, 48, 6, 50, 1, 51, 1, 52, 1, 54, 1, 52, 1, 50, 9, 48, 2, 93, 1, 91, 10, 89, 1, 86, 1, 82, 1, 78, 1, 74, 1, 70, 1, 66, 6, 62, 1, 81, 1, 101, 1, 121, 1, 102, 1, 82, 9, 62, 3, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 1, 92, 5, 91, 2, 92, 2, 93, 1, 94, 2, 95, 2, 96, 1, 97, 3, 98, 6, 99, 6, 98, 2, 0, 1, 4, 13, 15, 3, 13, 6, 11, 1, 5, 1, 3, 1, 0, 1, 2, 1, 4, 9, 9, 2, 0, 1, 3, 16, 11, 6, 9, 1, 4, 1, 2, 1, 0, 1, 2, 1, 4, 9, 8, 3, 0, 11, 1, 4, 2, 7, 3, 2, 2, 1, 0, 1, 1, 1, 2, 9, 3, 2, 124, 37, 0, // harder
32, 32, 32, 2, 26, 32, 22, 8, 2, 6, 1, 10, 1, 15, 1, 19, 3, 24, 1, 20, 1, 15, 1, 11, 1, 10, 1, 9, 1, 8, 5, 6, 1, 9, 1, 12, 1, 15, 8, 18, 2, 26, 1, 35, 1, 44, 1, 53, 3, 62, 1, 64, 1, 67, 1, 70, 1, 69, 1, 68, 1, 67, 5, 66, 1, 62, 1, 57, 1, 53, 8, 48, 2, 81, 1, 82, 1, 84, 1, 86, 3, 88, 1, 90, 1, 93, 1, 96, 1, 102, 1, 108, 1, 114, 5, 121, 1, 107, 1, 92, 1, 77, 8, 62, 30, 98, 2, 0, 1, 2, 1, 4, 1, 8, 3, 15, 1, 9, 1, 4, 8, 2, 1, 0, 1, 2, 1, 3, 1, 5, 8, 9, 2, 0, 1, 2, 1, 4, 1, 6, 3, 13, 1, 8, 1, 4, 3, 2, 1, 1, 3, 0, 1, 1, 1, 0, 1, 2, 1, 3, 1, 4, 8, 8, 2, 0, 2, 2, 1, 3, 3, 4, 1, 3, 3, 2, 2, 1, 5, 0, 1, 1, 2, 2, 8, 3, 2, 211, 8, 0, 2, 241, 18, 0, // faster
26, 14, 28, 2, 26, 28, 22, 6, 9, 6, 1, 10, 1, 14, 4, 18, 1, 15, 1, 12, 2, 9, 1, 8, 1, 7, 5, 6, 1, 10, 1, 14, 9, 18, 9, 26, 1, 39, 1, 52, 15, 66, 1, 60, 1, 54, 9, 48, 9, 81, 1, 84, 1, 87, 4, 91, 1, 98, 1, 106, 1, 113, 1, 115, 1, 117, 1, 119, 5, 121, 1, 102, 1, 82, 9, 62, 37, 98, 7, 2, 2, 0, 1, 2, 1, 5, 4, 13, 1, 8, 1, 4, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 9, 9, 6, 0, 1, 1, 2, 0, 1, 2, 1, 4, 4, 11, 1, 6, 1, 4, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 9, 8, 9, 0, 1, 2, 1, 3, 4, 4, 1, 3, 3, 2, 2, 1, 5, 0, 1, 1, 1, 2, 9, 3, 22, 0, 2, 25, 13, 0, // better
24, 38, 42, 2, 40, 32, 22, 4, 10, 6, 6, 18, 2, 19, 11, 20, 1, 17, 1, 13, 1, 10, 13, 6, 1, 9, 1, 12, 1, 15, 8, 18, 1, 73, 1, 70, 8, 66, 4, 50, 1, 46, 1, 42, 1, 38, 1, 34, 11, 30, 1, 44, 1, 58, 1, 72, 4, 86, 2, 85, 7, 84, 1, 75, 1, 66, 1, 57, 8, 48, 1, 99, 1, 110, 8, 121, 4, 60, 1, 65, 1, 71, 1, 76, 1, 82, 11, 88, 1, 91, 1, 94, 1, 97, 3, 101, 1, 100, 1, 98, 1, 96, 7, 94, 1, 86, 1, 78, 1, 70, 8, 62, 56, 98, 2, 0, 8, 1, 5, 9, 2, 11, 1, 13, 11, 15, 1, 13, 1, 9, 1, 8, 3, 5, 1, 4, 1, 3, 1, 2, 4, 1, 1, 2, 2, 0, 1, 2, 1, 3, 1, 5, 8, 9, 10, 0, 6, 6, 2, 8, 11, 9, 1, 8, 1, 5, 1, 4, 4, 3, 2, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 3, 1, 4, 8, 8, 10, 0, 4, 3, 3, 2, 1, 1, 14, 0, 5, 2, 1, 1, 7, 0, 1, 1, 2, 2, 8, 3, 2, 241, 54, 0, // stronger
38, 36, 48, 2, 40, 44, 14, 6, 8, 6, 1, 10, 1, 14, 3, 18, 1, 16, 1, 14, 1, 12, 1, 10, 1, 8, 10, 6, 1, 10, 1, 14, 10, 18, 1, 17, 1, 16, 2, 15, 1, 14, 1, 13, 4, 12, 13, 66, 1, 69, 1, 72, 1, 75, 1, 78, 1, 81, 1, 84, 1, 79, 1, 74, 1, 69, 1, 64, 1, 59, 4, 54, 1, 46, 1, 38, 12, 30, 4, 29, 4, 28, 8, 121, 1, 111, 1, 101, 4, 91, 2, 92, 2, 93, 1, 94, 1, 98, 1, 103, 1, 107, 1, 112, 1, 116, 4, 121, 1, 110, 1, 99, 9, 88, 1, 87, 1, 86, 1, 85, 1, 84, 1, 83, 1, 82, 1, 81, 4, 80, 50, 98, 8, 0, 1, 2, 1, 5, 3, 13, 1, 9, 1, 6, 1, 4, 1, 3, 1, 2, 1, 0, 1, 1, 2, 2, 1, 3, 1, 4, 4, 5, 1, 8, 1, 11, 12, 15, 4, 13, 4, 11, 8, 0, 1, 2, 1, 4, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 1, 0, 1, 1, 2, 2, 1, 3, 1, 4, 4, 5, 1, 6, 1, 8, 10, 9, 2, 8, 2, 6, 2, 5, 4, 4, 8, 0, 1, 2, 1, 3, 4, 4, 1, 3, 3, 2, 32, 0, 4, 0, 2, 25, 44, 0, // techno
58, 84, 64, 28, 52, 62, 38, 10, 11, 6, 1, 10, 1, 14, 1, 18, 10, 22, 1, 18, 1, 14, 1, 10, 17, 6, 1, 7, 3, 8, 1, 9, 1, 10, 1, 11, 16, 12, 2, 11, 1, 10, 3, 9, 1, 10, 1, 11, 1, 12, 1, 13, 2, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 11, 26, 1, 30, 1, 35, 1, 39, 10, 44, 1, 54, 1, 65, 1, 75, 4, 86, 3, 85, 3, 84, 1, 65, 6, 46, 1, 64, 2, 82, 1, 73, 1, 63, 1, 54, 1, 44, 4, 34, 1, 33, 1, 32, 2, 31, 1, 30, 1, 29, 5, 28, 1, 32, 1, 37, 1, 41, 1, 46, 3, 51, 1, 55, 1, 59, 1, 63, 1, 67, 2, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 11, 81, 1, 82, 1, 84, 1, 85, 10, 87, 1, 90, 1, 94, 1, 97, 2, 101, 1, 100, 1, 99, 1, 98, 1, 97, 1, 96, 3, 94, 1, 88, 6, 81, 1, 95, 2, 110, 1, 105, 1, 99, 1, 94, 1, 88, 6, 82, 4, 81, 5, 80, 1, 82, 1, 85, 1, 87, 1, 90, 14, 93, 8, 94, 12, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 1, 92, 7, 91, 1, 92, 1, 93, 3, 94, 2, 95, 1, 96, 59, 98, 11, 0, 1, 2, 1, 4, 1, 8, 10, 15, 1, 13, 1, 9, 1, 8, 2, 5, 1, 4, 2, 3, 2, 2, 3, 0, 1, 3, 7, 9, 23, 11, 2, 9, 5, 8, 2, 9, 2, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 11, 0, 1, 2, 1, 3, 1, 5, 10, 9, 1, 8, 1, 5, 1, 4, 3, 3, 3, 2, 1, 1, 3, 0, 1, 1, 6, 2, 1, 3, 4, 6, 2, 5, 16, 4, 2, 3, 5, 2, 1, 3, 1, 4, 1, 5, 2, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 14, 0, 11, 1, 7, 2, 2, 1, 10, 0, 1, 2, 3, 4, 1, 3, 2, 2, 22, 0, 1, 1, 2, 2, 1, 3, 2, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 8, 0, 2, 27, 58, 0, 6, 1, 18, 0, // punk music
28, 28, 28, 2, 26, 30, 22, 4, 2, 14, 1, 19, 4, 24, 1, 21, 1, 18, 1, 15, 1, 12, 1, 9, 7, 6, 1, 8, 1, 10, 1, 13, 1, 15, 8, 18, 2, 73, 1, 68, 4, 62, 1, 65, 1, 69, 1, 73, 1, 76, 1, 80, 7, 84, 1, 77, 1, 70, 1, 63, 1, 56, 8, 48, 2, 93, 1, 91, 4, 88, 1, 89, 1, 90, 1, 91, 1, 92, 1, 93, 7, 94, 1, 88, 1, 82, 1, 75, 1, 69, 8, 62, 31, 98, 2, 0, 1, 4, 4, 15, 1, 11, 1, 6, 1, 4, 1, 3, 1, 2, 7, 0, 2, 2, 1, 4, 1, 5, 8, 9, 2, 0, 1, 4, 4, 13, 1, 9, 1, 6, 1, 4, 1, 3, 1, 2, 3, 0, 1, 6, 3, 0, 2, 2, 1, 3, 1, 4, 8, 8, 2, 0, 1, 2, 5, 4, 1, 3, 3, 2, 3, 0, 1, 3, 3, 0, 1, 1, 3, 2, 8, 3, 2, 124, 29, 0, // hacker
16, 24, 24, 2, 26, 28, 14, 4, 7, 6, 1, 10, 1, 15, 1, 19, 7, 24, 1, 18, 1, 12, 8, 6, 7, 66, 1, 65, 1, 64, 1, 63, 7, 62, 1, 60, 1, 57, 4, 54, 1, 58, 1, 63, 1, 68, 1, 73, 7, 121, 1, 113, 1, 105, 1, 97, 7, 88, 1, 99, 1, 110, 4, 121, 1, 116, 1, 110, 1, 105, 1, 99, 27, 98, 6, 2, 1, 0, 1, 2, 1, 4, 1, 8, 7, 15, 1, 11, 1, 8, 4, 5, 1, 4, 1, 3, 1, 2, 1, 0, 5, 0, 1, 1, 1, 0, 1, 2, 1, 4, 1, 6, 7, 13, 1, 11, 1, 8, 4, 5, 1, 4, 1, 3, 1, 2, 1, 0, 7, 0, 2, 2, 1, 3, 7, 4, 1, 3, 1, 2, 8, 0, 25, 0, 2, 241, // dance
142, 142, 140, 36, 106, 118, 86, 18, 5, 24, 1, 21, 1, 18, 1, 15, 1, 12, 1, 11, 1, 10, 1, 9, 1, 8, 5, 6, 1, 8, 1, 11, 7, 14, 1, 13, 1, 12, 1, 11, 1, 10, 4, 8, 1, 10, 1, 12, 1, 14, 1, 16, 8, 18, 2, 17, 2, 16, 2, 15, 2, 14, 1, 12, 1, 10, 1, 8, 6, 6, 1, 8, 1, 11, 5, 14, 1, 15, 1, 16, 1, 17, 9, 18, 2, 17, 2, 16, 2, 15, 2, 14, 1, 12, 1, 10, 1, 8, 1, 6, 1, 9, 1, 12, 1, 15, 6, 18, 1, 16, 1, 14, 1, 12, 1, 10, 1, 8, 3, 6, 4, 10, 1, 12, 1, 15, 1, 18, 1, 21, 7, 24, 1, 18, 1, 12, 6, 6, 1, 10, 1, 15, 4, 20, 1, 16, 1, 11, 6, 6, 5, 62, 1, 65, 1, 69, 1, 73, 1, 76, 1, 74, 1, 72, 1, 70, 1, 68, 5, 66, 1, 68, 1, 70, 7, 72, 1, 66, 1, 60, 1, 53, 1, 47, 4, 40, 1, 46, 1, 52, 1, 59, 1, 65, 8, 72, 2, 71, 2, 70, 2, 69, 3, 68, 2, 67, 6, 66, 1, 54, 1, 42, 4, 30, 1, 38, 1, 46, 1, 55, 1, 63, 9, 72, 2, 71, 2, 70, 2, 69, 2, 68, 1, 69, 1, 70, 1, 71, 1, 73, 1, 67, 1, 61, 1, 55, 6, 48, 1, 58, 1, 68, 1, 78, 1, 88, 1, 98, 3, 109, 1, 86, 3, 109, 1, 100, 1, 91, 1, 81, 1, 72, 7, 62, 1, 60, 1, 57, 6, 54, 1, 51, 1, 48, 4, 44, 1, 47, 1, 50, 6, 54, 5, 88, 1, 89, 1, 90, 1, 91, 1, 92, 1, 97, 1, 103, 1, 109, 1, 115, 5, 121, 1, 112, 1, 103, 7, 93, 1, 90, 1, 87, 1, 83, 1, 80, 4, 76, 1, 78, 1, 81, 1, 84, 1, 87, 9, 90, 3, 91, 2, 92, 2, 93, 1, 100, 1, 107, 1, 114, 6, 121, 1, 118, 1, 114, 4, 110, 1, 106, 1, 102, 1, 98, 1, 94, 10, 90, 3, 91, 2, 92, 2, 93, 1, 94, 1, 96, 1, 97, 1, 99, 1, 90, 1, 81, 1, 72, 6, 62, 1, 68, 1, 75, 1, 81, 1, 88, 1, 94, 4, 101, 3, 112, 1, 108, 1, 103, 1, 98, 1, 93, 7, 88, 1, 99, 1, 110, 6, 121, 1, 111, 1, 100, 4, 89, 1, 99, 1, 110, 6, 121, 64, 98, 1, 97, 1, 95, 1, 93, 4, 91, 2, 90, 1, 89, 2, 88, 2, 87, 1, 86, 12, 85, 1, 87, 1, 90, 1, 92, 2, 95, 2, 96, 2, 97, 49, 98, 5, 15, 1, 11, 1, 6, 1, 4, 1, 3, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 9, 11, 2, 9, 5, 8, 2, 9, 1, 11, 16, 13, 1, 8, 1, 4, 1, 2, 6, 0, 1, 2, 1, 4, 8, 11, 17, 13, 1, 8, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 1, 5, 6, 9, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 9, 3, 0, 1, 2, 1, 3, 1, 5, 1, 9, 7, 15, 1, 11, 1, 8, 6, 5, 1, 6, 1, 8, 4, 9, 1, 8, 1, 6, 6, 5, 5, 13, 1, 9, 1, 6, 1, 4, 1, 3, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 7, 8, 1, 6, 2, 4, 1, 3, 4, 2, 1, 3, 1, 4, 1, 5, 1, 8, 10, 13, 4, 11, 2, 9, 1, 5, 1, 3, 1, 2, 6, 0, 1, 2, 1, 3, 4, 4, 1, 5, 1, 6, 1, 8, 1, 9, 11, 13, 4, 11, 2, 9, 1, 5, 1, 3, 1, 2, 1, 0, 1, 2, 1, 3, 1, 4, 6, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 3, 0, 1, 2, 1, 3, 1, 4, 1, 8, 7, 13, 1, 11, 1, 8, 20, 5, 6, 4, 1, 3, 5, 2, 1, 1, 5, 0, 2, 2, 7, 4, 2, 3, 2, 2, 4, 0, 1, 1, 1, 2, 1, 3, 1, 4, 10, 5, 6, 4, 1, 3, 2, 2, 8, 0, 4, 1, 2, 2, 1, 3, 1, 4, 11, 5, 6, 4, 1, 3, 2, 2, 1, 0, 1, 1, 2, 2, 7, 3, 3, 2, 1, 1, 3, 0, 1, 4, 3, 0, 1, 1, 2, 2, 1, 3, 7, 4, 1, 3, 1, 2, 20, 0, 14, 0, 2, 25, 13, 0, 7, 3, 24, 0, 2, 25, 31, 0, 2, 241, 54, 0, // activate laser cannon
50, 48, 54, 30, 48, 60, 38, 2, 11, 6, 1, 10, 1, 14, 10, 18, 2, 17, 2, 16, 2, 15, 6, 14, 1, 12, 1, 10, 1, 8, 7, 6, 1, 7, 1, 8, 5, 10, 1, 9, 1, 8, 1, 7, 7, 6, 1, 9, 1, 12, 1, 15, 8, 18, 2, 17, 7, 16, 11, 26, 1, 41, 1, 56, 10, 72, 2, 71, 2, 70, 2, 69, 6, 68, 1, 58, 1, 47, 1, 37, 7, 26, 1, 45, 1, 64, 15, 84, 1, 75, 1, 66, 1, 57, 6, 48, 1, 46, 1, 44, 1, 41, 1, 39, 7, 36, 11, 81, 1, 84, 1, 87, 11, 90, 3, 91, 2, 92, 6, 93, 1, 90, 1, 87, 1, 84, 7, 81, 1, 90, 1, 100, 5, 110, 1, 106, 1, 102, 1, 98, 7, 94, 1, 86, 1, 78, 1, 70, 6, 62, 1, 71, 1, 81, 1, 90, 1, 100, 7, 110, 12, 91, 1, 90, 1, 89, 2, 88, 1, 87, 1, 86, 17, 85, 1, 86, 1, 88, 1, 89, 1, 91, 1, 93, 1, 94, 1, 96, 40, 98, 9, 2, 2, 0, 1, 2, 1, 5, 22, 13, 1, 8, 1, 4, 1, 3, 5, 2, 2, 0, 1, 2, 1, 4, 5, 11, 1, 6, 1, 4, 1, 2, 4, 1, 1, 2, 2, 0, 1, 2, 1, 3, 1, 5, 10, 9, 7, 11, 8, 0, 1, 1, 2, 0, 1, 2, 1, 5, 12, 13, 4, 11, 6, 9, 1, 5, 1, 3, 1, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 3, 5, 6, 1, 4, 1, 3, 1, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 3, 1, 4, 7, 8, 2, 6, 1, 5, 7, 4, 11, 0, 1, 2, 1, 3, 12, 5, 10, 4, 1, 3, 2, 2, 7, 0, 1, 2, 1, 3, 5, 4, 1, 3, 2, 2, 7, 0, 1, 1, 2, 2, 7, 3, 3, 2, 7, 1, 82, 0, // baby girl
94, 108, 106, 26, 76, 78, 62, 10, 10, 6, 1, 8, 1, 10, 1, 13, 1, 15, 5, 18, 1, 19, 1, 20, 1, 21, 6, 22, 1, 18, 1, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 3, 6, 5, 10, 1, 11, 1, 12, 1, 13, 5, 14, 2, 15, 6, 16, 1, 14, 1, 11, 1, 9, 5, 6, 1, 9, 1, 12, 1, 15, 3, 18, 1, 15, 1, 12, 1, 9, 1, 8, 8, 6, 6, 18, 2, 19, 7, 20, 1, 19, 1, 18, 2, 17, 1, 16, 1, 15, 3, 14, 10, 84, 1, 78, 1, 71, 1, 64, 1, 57, 4, 50, 1, 49, 1, 48, 1, 47, 1, 46, 6, 44, 1, 52, 1, 61, 1, 69, 1, 77, 1, 85, 1, 93, 1, 101, 3, 109, 1, 86, 3, 109, 1, 102, 1, 95, 1, 87, 1, 80, 3, 72, 1, 65, 1, 58, 1, 51, 1, 44, 6, 36, 1, 43, 1, 51, 1, 58, 11, 66, 1, 67, 1, 69, 1, 71, 1, 69, 8, 66, 4, 50, 1, 46, 1, 42, 1, 38, 1, 34, 6, 30, 1, 34, 1, 39, 1, 44, 1, 49, 1, 53, 1, 58, 1, 63, 3, 68, 10, 94, 1, 88, 1, 81, 1, 74, 1, 67, 4, 60, 1, 65, 1, 70, 1, 76, 1, 81, 6, 87, 1, 91, 2, 96, 1, 97, 1, 98, 1, 99, 1, 100, 4, 101, 3, 112, 1, 109, 1, 105, 1, 101, 1, 97, 3, 93, 1, 96, 1, 99, 1, 103, 1, 106, 6, 110, 1, 112, 1, 115, 1, 118, 5, 121, 1, 114, 1, 106, 1, 99, 3, 91, 1, 93, 1, 95, 1, 97, 1, 109, 8, 121, 4, 60, 1, 65, 1, 71, 1, 76, 1, 82, 7, 88, 2, 89, 1, 90, 2, 91, 1, 92, 3, 93, 19, 98, 1, 97, 1, 96, 2, 95, 1, 94, 1, 93, 1, 92, 2, 91, 1, 92, 2, 93, 1, 94, 1, 95, 76, 98, 10, 0, 2, 2, 1, 4, 1, 5, 5, 9, 2, 11, 1, 13, 6, 15, 1, 9, 2, 4, 1, 3, 3, 2, 3, 0, 1, 9, 3, 0, 1, 2, 1, 3, 1, 4, 1, 6, 13, 11, 1, 8, 1, 4, 1, 3, 4, 2, 1, 0, 1, 2, 1, 4, 1, 6, 3, 13, 1, 8, 1, 4, 2, 2, 8, 1, 5, 9, 2, 11, 1, 13, 13, 15, 3, 13, 6, 0, 1, 6, 3, 0, 2, 2, 1, 3, 1, 4, 6, 6, 2, 8, 6, 9, 1, 5, 2, 3, 3, 2, 1, 1, 3, 0, 1, 6, 3, 0, 2, 2, 1, 3, 1, 4, 4, 8, 2, 6, 1, 5, 6, 4, 1, 3, 2, 2, 3, 0, 1, 1, 1, 0, 1, 2, 1, 3, 1, 5, 3, 11, 1, 6, 1, 4, 2, 2, 8, 0, 6, 6, 2, 8, 16, 9, 6, 0, 1, 3, 3, 0, 1, 1, 3, 2, 5, 3, 3, 2, 13, 1, 3, 0, 1, 4, 3, 0, 1, 1, 2, 2, 1, 3, 3, 4, 2, 3, 2, 2, 9, 1, 5, 0, 2, 2, 1, 3, 3, 4, 1, 3, 2, 2, 1, 1, 8, 0, 4, 3, 3, 2, 1, 1, 13, 0, 3, 4, 30, 0, 2, 226, 43, 0, 2, 241, 32, 0, // crush kill destroy
28, 28, 22, 2, 26, 30, 16, 4, 2, 6, 1, 7, 1, 8, 1, 9, 2, 10, 1, 12, 1, 15, 1, 18, 1, 21, 7, 24, 1, 20, 1, 15, 1, 11, 7, 6, 2, 73, 1, 61, 1, 49, 1, 37, 2, 24, 1, 31, 1, 39, 1, 46, 1, 54, 7, 62, 1, 67, 1, 73, 1, 78, 7, 84, 2, 99, 1, 97, 1, 95, 1, 93, 4, 90, 2, 89, 7, 88, 1, 89, 1, 91, 1, 92, 7, 94, 28, 98, 2, 0, 1, 2, 1, 3, 1, 5, 4, 11, 2, 13, 7, 15, 1, 9, 1, 4, 1, 3, 4, 1, 1, 2, 2, 0, 2, 0, 2, 2, 1, 3, 2, 4, 1, 5, 1, 6, 1, 8, 1, 9, 7, 13, 1, 8, 1, 4, 1, 2, 4, 0, 1, 1, 2, 0, 7, 0, 1, 1, 2, 2, 1, 3, 7, 4, 1, 3, 2, 2, 7, 0, 2, 241, 26, 0, // swag
38, 46, 36, 2, 22, 34, 24, 6, 9, 24, 1, 21, 1, 18, 1, 15, 1, 12, 7, 9, 3, 10, 1, 11, 1, 12, 1, 13, 1, 14, 6, 16, 1, 17, 1, 18, 1, 19, 1, 20, 5, 22, 1, 14, 6, 6, 9, 62, 1, 60, 1, 58, 1, 56, 1, 54, 3, 51, 1, 57, 1, 64, 1, 70, 1, 77, 3, 84, 1, 75, 1, 65, 1, 56, 1, 46, 6, 36, 1, 37, 1, 39, 1, 40, 1, 42, 5, 44, 1, 45, 6, 46, 9, 88, 1, 89, 1, 90, 1, 91, 1, 92, 3, 93, 1, 96, 1, 99, 1, 103, 1, 106, 13, 110, 1, 106, 1, 101, 1, 97, 1, 92, 5, 87, 1, 84, 6, 81, 49, 98, 10, 15, 1, 13, 1, 11, 1, 9, 5, 8, 2, 9, 15, 11, 2, 13, 5, 15, 1, 13, 6, 9, 9, 13, 1, 9, 1, 6, 1, 4, 1, 3, 4, 2, 1, 3, 2, 4, 5, 6, 2, 5, 7, 4, 1, 5, 1, 6, 1, 8, 5, 9, 1, 4, 6, 2, 10, 4, 1, 3, 2, 2, 3, 0, 1, 1, 2, 2, 1, 3, 4, 4, 1, 3, 2, 2, 16, 1, 6, 0, 11, 0, 6, 1, 32, 0, // asylum
76, 86, 86, 2, 68, 74, 44, 10, 10, 6, 1, 8, 1, 10, 1, 13, 1, 15, 2, 18, 1, 17, 1, 16, 1, 15, 3, 14, 1, 12, 1, 10, 1, 8, 10, 6, 1, 12, 1, 19, 11, 26, 1, 21, 1, 16, 1, 11, 7, 6, 1, 9, 1, 12, 1, 15, 1, 18, 1, 19, 1, 20, 1, 21, 1, 22, 3, 24, 1, 20, 1, 15, 1, 11, 1, 6, 1, 7, 1, 8, 1, 9, 5, 10, 10, 84, 1, 78, 1, 71, 1, 64, 1, 57, 1, 50, 1, 54, 1, 58, 1, 63, 1, 67, 3, 72, 1, 61, 1, 49, 1, 38, 2, 26, 1, 36, 1, 46, 1, 56, 5, 66, 1, 58, 1, 49, 11, 40, 1, 51, 1, 62, 1, 73, 7, 84, 1, 76, 1, 67, 1, 59, 1, 50, 1, 52, 1, 54, 1, 57, 1, 59, 3, 62, 1, 53, 1, 44, 1, 35, 1, 26, 1, 40, 1, 55, 1, 69, 5, 84, 10, 94, 1, 88, 1, 81, 1, 74, 1, 67, 1, 60, 1, 66, 1, 73, 1, 79, 1, 86, 3, 93, 1, 90, 1, 87, 1, 84, 2, 81, 1, 91, 1, 101, 1, 111, 5, 121, 1, 111, 1, 100, 11, 89, 1, 90, 1, 91, 1, 92, 7, 94, 1, 86, 1, 77, 1, 69, 1, 60, 1, 65, 1, 71, 1, 76, 1, 82, 3, 88, 1, 87, 1, 85, 1, 83, 1, 81, 1, 88, 1, 95, 1, 102, 5, 110, 81, 98, 10, 0, 2, 2, 1, 4, 1, 5, 5, 9, 3, 11, 1, 6, 1, 4, 1, 2, 10, 0, 1, 3, 1, 6, 11, 15, 1, 9, 1, 4, 1, 3, 4, 1, 1, 2, 2, 0, 1, 2, 1, 3, 1, 5, 2, 9, 2, 11, 1, 13, 3, 15, 1, 9, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 1, 5, 5, 11, 6, 0, 1, 6, 3, 0, 2, 2, 1, 3, 1, 4, 5, 6, 3, 8, 1, 5, 1, 3, 1, 2, 10, 0, 1, 2, 1, 4, 11, 11, 1, 6, 1, 4, 1, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 3, 1, 4, 2, 6, 1, 8, 1, 9, 1, 11, 3, 13, 1, 8, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 1, 4, 5, 6, 6, 0, 1, 3, 3, 0, 1, 1, 3, 2, 5, 3, 3, 4, 1, 3, 2, 2, 12, 0, 14, 1, 7, 0, 1, 1, 2, 2, 4, 3, 4, 4, 1, 3, 2, 2, 1, 0, 2, 2, 1, 3, 5, 4, 31, 0, 2, 25, 38, 0, 2, 211, 8, 0, // cryptography
68, 72, 42, 2, 62, 72, 42, 6, 11, 6, 1, 7, 1, 8, 1, 9, 3, 10, 1, 11, 1, 12, 1, 13, 2, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 7, 6, 1, 10, 1, 14, 1, 18, 1, 20, 1, 22, 1, 24, 7, 26, 1, 20, 1, 13, 1, 6, 1, 8, 1, 11, 3, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 10, 84, 1, 72, 1, 60, 1, 48, 1, 36, 2, 24, 1, 33, 1, 43, 1, 52, 1, 62, 2, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 7, 84, 1, 76, 1, 67, 1, 58, 1, 54, 1, 49, 1, 45, 7, 40, 1, 44, 1, 49, 1, 54, 1, 60, 1, 66, 3, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 11, 94, 1, 93, 1, 92, 1, 91, 3, 90, 2, 91, 1, 92, 7, 93, 7, 94, 1, 93, 1, 92, 2, 91, 2, 90, 7, 89, 1, 99, 1, 110, 1, 121, 1, 112, 1, 103, 8, 93, 8, 94, 68, 98, 10, 0, 1, 2, 1, 3, 1, 4, 1, 6, 8, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 7, 0, 1, 2, 1, 3, 1, 5, 1, 6, 1, 9, 1, 11, 7, 15, 1, 6, 1, 3, 1, 0, 1, 2, 1, 4, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 6, 0, 1, 6, 3, 0, 1, 1, 2, 2, 1, 3, 3, 4, 2, 5, 1, 6, 2, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 3, 0, 1, 2, 1, 3, 2, 4, 1, 6, 1, 8, 7, 11, 1, 5, 1, 3, 1, 0, 1, 2, 1, 4, 3, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 6, 0, 1, 3, 9, 0, 1, 1, 2, 2, 1, 3, 2, 4, 2, 3, 3, 2, 3, 0, 1, 3, 9, 0, 9, 1, 1, 0, 2, 2, 3, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 35, 0, 2, 241, 31, 0, // quixotic
52, 76, 60, 2, 44, 56, 42, 2, 8, 18, 2, 17, 8, 16, 2, 17, 2, 18, 1, 16, 1, 14, 1, 12, 1, 10, 1, 8, 9, 6, 6, 18, 2, 19, 3, 20, 1, 16, 1, 11, 6, 6, 1, 8, 1, 11, 3, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 6, 66, 1, 60, 1, 54, 1, 48, 1, 42, 6, 36, 1, 42, 1, 48, 1, 54, 1, 60, 2, 66, 1, 69, 1, 72, 1, 75, 1, 78, 1, 81, 1, 84, 1, 83, 1, 81, 6, 79, 4, 50, 1, 49, 1, 48, 1, 47, 1, 46, 3, 44, 1, 47, 1, 50, 6, 54, 1, 60, 1, 66, 3, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 6, 91, 1, 94, 1, 98, 1, 102, 1, 106, 6, 110, 1, 107, 1, 103, 1, 99, 1, 95, 3, 91, 2, 92, 2, 93, 1, 94, 1, 96, 1, 98, 6, 101, 4, 60, 1, 65, 1, 71, 1, 77, 1, 83, 3, 89, 1, 99, 1, 110, 6, 121, 1, 112, 1, 103, 8, 93, 8, 94, 73, 98, 10, 13, 10, 11, 2, 13, 1, 9, 1, 6, 1, 4, 1, 3, 1, 2, 9, 0, 11, 9, 1, 8, 1, 6, 6, 5, 1, 6, 1, 8, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 6, 11, 1, 9, 1, 8, 1, 6, 1, 5, 6, 4, 1, 5, 1, 6, 1, 8, 1, 9, 2, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 9, 0, 8, 6, 12, 5, 1, 6, 3, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 7, 4, 1, 3, 2, 2, 6, 1, 2, 2, 2, 3, 3, 4, 1, 3, 3, 2, 9, 0, 4, 3, 3, 2, 1, 1, 11, 0, 2, 2, 3, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 73, 0, // electronic
50, 54, 38, 2, 58, 58, 42, 2, 10, 18, 1, 14, 1, 10, 6, 6, 1, 8, 1, 11, 8, 14, 1, 12, 1, 10, 1, 8, 14, 6, 1, 15, 6, 24, 1, 18, 1, 12, 1, 6, 1, 8, 1, 11, 3, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 10, 66, 1, 62, 1, 58, 6, 54, 1, 60, 1, 66, 8, 72, 1, 75, 1, 78, 1, 81, 7, 84, 1, 65, 6, 46, 1, 54, 6, 62, 1, 60, 1, 57, 1, 54, 1, 60, 1, 66, 3, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 10, 91, 1, 101, 1, 111, 6, 121, 1, 112, 1, 103, 11, 93, 7, 94, 1, 88, 6, 81, 1, 84, 6, 88, 1, 99, 1, 110, 1, 121, 1, 112, 1, 103, 8, 93, 8, 94, 73, 98, 10, 13, 1, 11, 1, 8, 6, 5, 1, 6, 1, 8, 8, 11, 1, 6, 1, 4, 1, 2, 4, 1, 1, 2, 2, 0, 1, 3, 6, 9, 1, 11, 6, 15, 1, 6, 1, 3, 1, 0, 1, 2, 1, 4, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 10, 11, 1, 9, 1, 8, 7, 5, 1, 6, 8, 8, 1, 5, 1, 3, 1, 2, 4, 0, 1, 1, 2, 0, 1, 1, 6, 2, 1, 4, 6, 13, 1, 6, 1, 3, 1, 0, 1, 2, 1, 4, 3, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 10, 4, 1, 3, 1, 2, 6, 0, 2, 2, 8, 4, 1, 3, 2, 2, 14, 0, 1, 2, 6, 4, 1, 3, 1, 2, 1, 0, 2, 2, 3, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 73, 0, // enigmatic
74, 74, 78, 2, 70, 82, 44, 8, 9, 6, 1, 9, 1, 13, 1, 16, 1, 20, 2, 24, 1, 23, 1, 21, 1, 20, 1, 18, 6, 16, 1, 17, 1, 19, 1, 20, 1, 22, 3, 24, 1, 20, 1, 15, 1, 11, 9, 6, 1, 10, 1, 15, 1, 19, 8, 24, 1, 20, 1, 15, 1, 11, 7, 6, 1, 10, 1, 14, 1, 18, 1, 22, 5, 26, 1, 21, 1, 16, 1, 11, 1, 6, 9, 110, 1, 101, 1, 91, 1, 82, 1, 72, 2, 62, 1, 57, 1, 52, 1, 47, 1, 42, 6, 36, 1, 41, 1, 46, 1, 51, 1, 56, 3, 62, 1, 53, 1, 44, 1, 35, 9, 26, 1, 35, 1, 44, 1, 53, 8, 62, 1, 74, 1, 86, 1, 98, 7, 110, 1, 96, 1, 82, 1, 68, 1, 54, 5, 40, 1, 48, 1, 56, 1, 64, 1, 73, 6, 112, 3, 110, 1, 106, 1, 102, 1, 97, 1, 93, 2, 88, 1, 92, 1, 96, 1, 101, 1, 105, 6, 110, 1, 106, 1, 102, 1, 97, 1, 93, 3, 88, 1, 87, 1, 85, 1, 83, 9, 81, 1, 82, 1, 84, 1, 86, 8, 88, 1, 94, 1, 100, 1, 106, 4, 112, 3, 110, 1, 106, 1, 102, 1, 98, 1, 94, 5, 89, 1, 91, 1, 94, 1, 96, 1, 99, 78, 98, 6, 1, 1, 2, 2, 0, 1, 2, 1, 3, 1, 5, 1, 9, 4, 15, 2, 13, 8, 11, 2, 13, 3, 15, 1, 9, 1, 4, 1, 2, 9, 0, 1, 2, 1, 4, 1, 8, 8, 15, 1, 9, 1, 4, 1, 3, 4, 1, 1, 2, 2, 0, 1, 2, 1, 3, 1, 5, 1, 9, 5, 15, 1, 9, 1, 4, 1, 2, 1, 0, 6, 0, 1, 1, 2, 0, 1, 2, 1, 3, 1, 4, 1, 8, 2, 13, 1, 11, 1, 9, 1, 8, 1, 6, 6, 4, 1, 5, 1, 6, 1, 8, 1, 9, 3, 13, 1, 8, 1, 4, 1, 2, 9, 0, 1, 2, 1, 4, 1, 6, 8, 13, 1, 8, 1, 4, 1, 2, 4, 0, 1, 1, 2, 0, 1, 2, 1, 3, 1, 4, 1, 6, 5, 11, 1, 6, 1, 4, 1, 2, 1, 0, 9, 0, 1, 1, 2, 2, 1, 3, 3, 4, 1, 3, 2, 2, 6, 1, 2, 2, 2, 3, 3, 4, 1, 3, 2, 2, 9, 0, 2, 2, 1, 3, 8, 4, 1, 3, 2, 2, 11, 0, 8, 1, 1, 0, 41, 0, 2, 27, 33, 0, 2, 241, // galapagos
70, 84, 82, 38, 24, 38, 40, 6, 11, 10, 1, 11, 1, 12, 1, 13, 1, 15, 1, 16, 1, 17, 1, 18, 7, 20, 1, 19, 1, 18, 1, 17, 8, 16, 2, 17, 5, 18, 1, 19, 1, 20, 1, 21, 1, 22, 1, 23, 1, 24, 1, 25, 7, 26, 1, 25, 1, 23, 1, 22, 1, 20, 1, 19, 1, 17, 1, 16, 2, 14, 1, 12, 1, 10, 1, 8, 6, 6, 5, 24, 1, 36, 1, 48, 1, 60, 1, 72, 2, 84, 1, 78, 1, 71, 1, 64, 1, 57, 1, 51, 1, 44, 1, 37, 6, 30, 1, 31, 1, 32, 1, 33, 1, 34, 6, 36, 1, 38, 1, 41, 1, 44, 1, 47, 5, 50, 1, 49, 1, 47, 1, 46, 1, 44, 1, 43, 1, 41, 1, 40, 7, 38, 1, 41, 1, 45, 1, 49, 1, 53, 1, 56, 1, 60, 1, 64, 3, 68, 2, 67, 6, 66, 5, 90, 1, 94, 1, 98, 1, 102, 1, 106, 2, 110, 1, 108, 1, 105, 1, 102, 1, 99, 1, 97, 1, 94, 1, 91, 6, 88, 1, 92, 1, 96, 1, 101, 1, 105, 6, 110, 1, 101, 1, 91, 1, 82, 1, 72, 5, 62, 1, 65, 1, 68, 1, 71, 1, 75, 1, 78, 1, 81, 1, 84, 8, 88, 2, 89, 1, 90, 2, 91, 1, 92, 2, 93, 1, 100, 1, 107, 1, 114, 6, 121, 43, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 1, 92, 1, 91, 1, 90, 1, 89, 1, 88, 1, 87, 7, 85, 5, 84, 1, 86, 1, 89, 1, 92, 1, 95, 5, 98, 14, 11, 4, 13, 8, 15, 2, 13, 18, 11, 4, 13, 14, 15, 2, 13, 1, 8, 1, 4, 1, 2, 6, 0, 7, 4, 2, 5, 5, 6, 4, 8, 7, 9, 1, 8, 1, 6, 1, 5, 7, 4, 1, 5, 1, 6, 1, 8, 12, 9, 14, 11, 2, 9, 1, 5, 1, 3, 1, 2, 6, 0, 5, 0, 1, 1, 2, 2, 1, 3, 3, 4, 2, 3, 3, 2, 1, 1, 10, 0, 6, 1, 3, 2, 9, 3, 4, 2, 8, 1, 4, 2, 2, 3, 2, 4, 1, 3, 2, 2, 6, 0, 71, 0, 2, 25, 2, 0, // we alright
70, 68, 78, 58, 62, 56, 18, 14, 11, 6, 1, 9, 1, 12, 1, 15, 18, 18, 1, 17, 1, 16, 2, 15, 1, 14, 1, 13, 2, 12, 1, 11, 1, 9, 1, 8, 9, 6, 1, 10, 1, 14, 1, 18, 6, 22, 1, 21, 1, 20, 1, 19, 1, 18, 5, 16, 1, 14, 1, 11, 1, 9, 1, 6, 1, 9, 1, 13, 1, 16, 3, 20, 1, 16, 1, 11, 6, 6, 11, 26, 1, 32, 1, 38, 1, 44, 5, 50, 1, 46, 1, 42, 1, 38, 1, 34, 11, 30, 4, 29, 3, 28, 2, 27, 9, 26, 1, 30, 1, 35, 1, 39, 6, 44, 1, 43, 1, 41, 1, 40, 1, 38, 5, 36, 1, 46, 1, 57, 1, 68, 1, 79, 1, 71, 1, 62, 1, 53, 3, 44, 1, 47, 1, 50, 6, 54, 11, 81, 1, 76, 1, 71, 1, 66, 5, 60, 1, 65, 1, 71, 1, 76, 1, 82, 8, 88, 1, 87, 1, 86, 1, 85, 1, 84, 1, 83, 1, 82, 1, 81, 5, 80, 9, 81, 1, 82, 1, 84, 1, 85, 6, 87, 1, 91, 1, 96, 1, 100, 1, 105, 5, 110, 1, 109, 1, 108, 1, 107, 1, 106, 1, 102, 1, 98, 1, 94, 3, 89, 1, 99, 1, 110, 6, 121, 20, 98, 2, 97, 1, 96, 2, 95, 1, 94, 2, 93, 1, 92, 6, 91, 5, 90, 1, 91, 1, 92, 1, 93, 1, 94, 1, 95, 1, 96, 6, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 5, 91, 1, 92, 1, 93, 2, 94, 1, 95, 1, 96, 1, 97, 19, 98, 11, 0, 1, 2, 1, 3, 1, 5, 6, 9, 2, 11, 1, 13, 11, 15, 4, 13, 2, 11, 1, 6, 1, 4, 1, 2, 9, 0, 1, 2, 1, 4, 1, 8, 8, 15, 2, 13, 5, 11, 1, 6, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 1, 5, 3, 9, 1, 8, 1, 6, 6, 5, 11, 0, 1, 2, 1, 3, 1, 4, 7, 6, 2, 8, 9, 9, 2, 8, 2, 6, 2, 5, 2, 4, 1, 3, 2, 2, 9, 0, 1, 2, 1, 3, 1, 5, 7, 9, 1, 8, 1, 6, 1, 5, 5, 4, 1, 3, 2, 2, 1, 0, 2, 2, 1, 3, 11, 5, 11, 0, 1, 1, 2, 2, 5, 3, 3, 2, 1, 1, 32, 0, 18, 1, 15, 0, 8, 0, 2, 27, 39, 0, 2, 27, 21, 0, 2, 226, 14, 0, // propulsion
62, 66, 56, 56, 58, 60, 22, 12, 2, 6, 1, 8, 1, 10, 1, 12, 7, 14, 4, 13, 2, 12, 1, 11, 1, 9, 1, 8, 9, 6, 1, 9, 1, 12, 1, 15, 11, 18, 1, 14, 1, 10, 7, 6, 1, 11, 1, 16, 10, 22, 1, 20, 1, 17, 1, 14, 1, 11, 4, 8, 1, 10, 1, 13, 1, 16, 1, 19, 3, 22, 2, 73, 1, 64, 1, 55, 1, 46, 4, 36, 1, 35, 1, 34, 1, 33, 1, 32, 1, 31, 1, 30, 1, 29, 3, 28, 2, 27, 9, 26, 1, 31, 1, 37, 1, 42, 11, 48, 1, 50, 1, 52, 7, 54, 1, 51, 1, 48, 11, 44, 1, 43, 1, 42, 1, 41, 5, 40, 1, 41, 1, 42, 1, 43, 3, 44, 2, 99, 1, 95, 1, 91, 1, 87, 7, 82, 4, 81, 5, 80, 9, 81, 1, 77, 1, 72, 1, 67, 11, 62, 1, 81, 1, 101, 7, 121, 1, 110, 1, 99, 10, 87, 1, 85, 1, 83, 1, 81, 1, 79, 4, 76, 1, 78, 1, 80, 1, 82, 1, 84, 3, 87, 45, 98, 2, 97, 1, 96, 2, 95, 1, 94, 3, 93, 1, 92, 1, 91, 1, 90, 1, 89, 1, 88, 1, 87, 1, 86, 1, 85, 1, 84, 2, 85, 1, 86, 1, 87, 1, 88, 1, 89, 1, 91, 1, 92, 1, 93, 2, 94, 1, 95, 1, 96, 1, 97, 3, 98, 2, 0, 1, 2, 1, 4, 1, 8, 7, 15, 4, 13, 2, 11, 1, 6, 1, 4, 1, 2, 9, 0, 1, 2, 1, 3, 1, 5, 11, 9, 1, 8, 1, 6, 7, 5, 1, 8, 1, 11, 11, 15, 1, 13, 1, 11, 1, 9, 5, 8, 1, 9, 1, 11, 1, 13, 3, 15, 2, 0, 1, 2, 1, 3, 1, 5, 5, 9, 2, 8, 2, 6, 2, 5, 2, 4, 1, 3, 2, 2, 9, 0, 1, 2, 1, 3, 1, 4, 12, 8, 1, 6, 7, 5, 1, 6, 1, 8, 10, 9, 1, 8, 1, 5, 1, 4, 1, 3, 5, 2, 1, 3, 1, 4, 1, 6, 3, 9, 5, 0, 11, 1, 14, 0, 1, 1, 2, 2, 11, 3, 2, 2, 9, 0, 14, 1, 8, 0, 3, 1, 2, 241, 25, 0, 2, 27, 38, 0, 7, 3, 6, 0, // supernova
58, 64, 54, 2, 54, 62, 44, 6, 10, 6, 1, 7, 1, 9, 1, 10, 3, 12, 2, 13, 8, 14, 1, 10, 6, 6, 1, 15, 4, 24, 1, 21, 1, 18, 1, 15, 1, 12, 1, 11, 1, 10, 1, 9, 1, 8, 5, 6, 1, 8, 1, 11, 3, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 8, 6, 10, 84, 1, 74, 1, 63, 1, 52, 1, 41, 1, 47, 1, 53, 1, 59, 1, 65, 8, 72, 1, 59, 6, 46, 1, 54, 4, 62, 1, 65, 1, 69, 1, 73, 1, 76, 1, 74, 1, 72, 1, 70, 1, 68, 5, 66, 1, 68, 1, 70, 3, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 8, 84, 10, 94, 1, 97, 1, 100, 1, 103, 1, 106, 1, 104, 1, 101, 1, 99, 1, 96, 8, 93, 1, 87, 6, 81, 1, 84, 4, 88, 1, 89, 1, 90, 1, 91, 1, 92, 1, 97, 1, 103, 1, 109, 1, 115, 5, 121, 1, 112, 1, 103, 8, 93, 8, 94, 69, 98, 10, 0, 1, 2, 1, 3, 1, 4, 2, 6, 2, 8, 1, 9, 9, 11, 6, 9, 1, 11, 4, 15, 1, 11, 1, 6, 1, 4, 1, 3, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 3, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 8, 0, 6, 0, 1, 6, 3, 0, 1, 1, 2, 2, 1, 3, 2, 4, 1, 5, 1, 6, 8, 8, 1, 4, 6, 2, 1, 4, 4, 13, 1, 9, 1, 6, 1, 4, 1, 3, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 3, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 4, 0, 6, 0, 1, 3, 7, 0, 1, 1, 2, 2, 1, 3, 8, 4, 1, 2, 6, 0, 1, 2, 5, 4, 1, 3, 5, 2, 1, 1, 5, 0, 2, 2, 3, 4, 2, 3, 3, 2, 3, 0, 1, 3, 4, 0, 47, 0, 2, 25, 20, 0, // climactic
70, 68, 82, 30, 36, 58, 30, 12, 5, 18, 1, 16, 1, 14, 1, 12, 1, 10, 1, 8, 12, 6, 1, 9, 1, 12, 1, 15, 9, 18, 1, 17, 1, 16, 2, 15, 1, 14, 1, 13, 3, 12, 1, 13, 1, 14, 1, 15, 8, 16, 2, 15, 4, 14, 2, 15, 2, 16, 2, 17, 6, 18, 2, 17, 2, 16, 2, 15, 2, 14, 1, 12, 1, 10, 1, 8, 6, 6, 5, 66, 1, 69, 1, 72, 1, 75, 1, 78, 1, 81, 7, 84, 1, 73, 1, 61, 1, 50, 1, 38, 1, 26, 1, 27, 1, 28, 1, 29, 11, 30, 4, 29, 2, 28, 1, 29, 1, 31, 1, 32, 1, 34, 6, 36, 1, 43, 1, 50, 1, 57, 1, 64, 16, 72, 2, 71, 2, 70, 2, 69, 3, 68, 2, 67, 6, 66, 6, 91, 2, 92, 2, 93, 7, 94, 1, 92, 1, 89, 1, 87, 1, 84, 1, 81, 1, 82, 1, 84, 1, 86, 8, 88, 1, 87, 1, 86, 1, 85, 1, 84, 1, 83, 1, 82, 1, 81, 2, 80, 1, 86, 1, 92, 1, 98, 1, 104, 6, 110, 1, 107, 1, 104, 1, 100, 1, 97, 4, 93, 3, 92, 3, 91, 7, 90, 3, 91, 2, 92, 2, 93, 1, 100, 1, 107, 1, 114, 6, 121, 23, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 1, 92, 14, 91, 1, 92, 1, 93, 1, 94, 1, 95, 1, 96, 1, 97, 40, 98, 5, 13, 1, 9, 1, 6, 1, 4, 1, 3, 1, 2, 12, 0, 1, 2, 1, 4, 1, 8, 11, 15, 4, 13, 26, 11, 14, 13, 1, 8, 1, 4, 1, 2, 6, 0, 5, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 3, 0, 1, 6, 8, 0, 1, 2, 1, 3, 1, 5, 9, 9, 2, 8, 2, 6, 2, 5, 13, 4, 2, 5, 1, 6, 4, 8, 3, 9, 3, 11, 8, 13, 4, 11, 2, 9, 1, 5, 1, 3, 1, 2, 6, 0, 6, 4, 1, 3, 3, 2, 3, 0, 1, 3, 32, 0, 6, 1, 3, 2, 1, 3, 10, 4, 8, 5, 6, 4, 1, 3, 2, 2, 6, 0, 18, 0, 2, 241, 2, 211, 63, 0, 2, 25, 2, 0, // exfoliate
68, 60, 78, 2, 68, 60, 58, 12, 2, 6, 1, 8, 1, 10, 1, 12, 7, 14, 1, 12, 1, 9, 14, 6, 1, 9, 1, 12, 1, 15, 3, 18, 2, 19, 3, 20, 1, 16, 1, 11, 6, 6, 1, 8, 1, 11, 4, 14, 1, 12, 1, 10, 1, 8, 1, 6, 1, 8, 1, 10, 1, 12, 4, 14, 1, 12, 1, 9, 1, 6, 1, 7, 1, 8, 6, 10, 5, 73, 7, 72, 1, 66, 1, 60, 5, 54, 1, 66, 8, 79, 1, 72, 1, 65, 1, 58, 1, 50, 1, 49, 1, 48, 1, 47, 1, 46, 3, 44, 1, 47, 1, 50, 6, 54, 1, 60, 1, 66, 7, 72, 4, 73, 4, 72, 1, 66, 1, 60, 1, 54, 1, 64, 1, 74, 6, 84, 2, 99, 1, 98, 1, 96, 1, 95, 7, 93, 1, 102, 1, 111, 5, 121, 1, 111, 8, 101, 1, 91, 1, 81, 1, 71, 1, 60, 1, 65, 1, 71, 1, 77, 1, 83, 3, 89, 1, 99, 1, 110, 6, 121, 1, 112, 1, 103, 4, 93, 1, 94, 1, 96, 1, 97, 1, 99, 1, 98, 1, 96, 1, 95, 4, 93, 1, 102, 1, 111, 1, 121, 1, 118, 1, 114, 6, 110, 75, 98, 2, 0, 1, 2, 1, 3, 1, 5, 7, 11, 1, 9, 1, 8, 5, 5, 1, 3, 8, 0, 1, 2, 1, 3, 1, 5, 8, 9, 1, 8, 1, 6, 6, 5, 1, 6, 1, 8, 4, 11, 1, 6, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 1, 5, 4, 11, 1, 5, 1, 3, 1, 0, 1, 2, 1, 4, 6, 11, 2, 0, 1, 2, 1, 3, 1, 4, 8, 8, 1, 6, 5, 5, 1, 3, 8, 0, 1, 2, 1, 3, 1, 4, 5, 6, 12, 5, 1, 6, 4, 8, 1, 5, 1, 3, 1, 2, 1, 0, 1, 2, 1, 3, 1, 4, 4, 8, 1, 4, 1, 2, 1, 0, 1, 2, 1, 3, 6, 6, 2, 0, 1, 1, 1, 2, 1, 3, 7, 4, 1, 3, 1, 2, 14, 0, 1, 1, 2, 2, 1, 3, 3, 2, 1, 1, 11, 0, 2, 2, 4, 4, 1, 3, 2, 2, 1, 0, 1, 1, 1, 2, 1, 3, 4, 4, 1, 3, 1, 2, 1, 0, 1, 2, 1, 3, 6, 4, 2, 241, 24, 0, 2, 114, 27, 0, 2, 241, 18, 0, // synchronicity
64, 70, 58, 2, 32, 56, 42, 6, 7, 6, 1, 10, 9, 14, 1, 12, 1, 9, 6, 6, 1, 8, 1, 11, 9, 14, 1, 10, 6, 6, 1, 15, 5, 24, 1, 23, 1, 21, 1, 20, 1, 18, 8, 16, 2, 15, 6, 14, 1, 13, 1, 12, 1, 11, 1, 10, 3, 9, 1, 11, 1, 13, 1, 15, 1, 17, 4, 20, 1, 13, 6, 6, 7, 46, 1, 59, 9, 72, 1, 66, 1, 60, 6, 54, 1, 60, 1, 66, 9, 72, 1, 59, 6, 46, 1, 54, 5, 62, 1, 57, 1, 52, 1, 47, 1, 42, 6, 36, 1, 43, 1, 50, 1, 57, 1, 64, 6, 72, 1, 68, 1, 64, 1, 60, 1, 56, 3, 51, 1, 50, 1, 49, 1, 47, 1, 46, 4, 44, 1, 45, 6, 46, 7, 81, 1, 87, 9, 93, 1, 102, 1, 111, 6, 121, 1, 112, 1, 103, 9, 93, 1, 87, 6, 81, 1, 84, 5, 88, 1, 92, 1, 96, 1, 101, 1, 105, 6, 110, 1, 107, 1, 104, 1, 100, 1, 97, 14, 93, 1, 92, 1, 91, 1, 90, 4, 89, 1, 85, 6, 81, 91, 98, 8, 9, 9, 11, 1, 9, 1, 8, 6, 5, 1, 6, 1, 8, 10, 11, 6, 9, 1, 11, 7, 15, 2, 13, 18, 11, 2, 9, 7, 8, 11, 9, 7, 2, 1, 4, 10, 8, 1, 6, 7, 5, 1, 6, 9, 8, 1, 4, 6, 2, 1, 4, 5, 13, 1, 11, 1, 9, 1, 8, 1, 6, 7, 4, 2, 5, 1, 6, 6, 8, 1, 6, 2, 4, 1, 3, 4, 2, 2, 3, 1, 4, 4, 5, 1, 3, 6, 2, 7, 0, 1, 2, 9, 4, 1, 3, 1, 2, 6, 0, 2, 2, 9, 4, 1, 2, 6, 0, 1, 2, 6, 4, 1, 3, 2, 2, 6, 1, 3, 2, 1, 3, 6, 4, 2, 3, 2, 2, 18, 0, 71, 0, 6, 1, 14, 0, // minimalism
40, 72, 62, 42, 38, 36, 24, 6, 4, 6, 1, 9, 1, 12, 1, 15, 17, 18, 2, 17, 2, 16, 1, 15, 1, 14, 1, 13, 1, 12, 1, 10, 1, 9, 1, 8, 7, 6, 1, 8, 1, 11, 1, 14, 5, 17, 7, 16, 2, 73, 1, 50, 1, 26, 1, 36, 1, 46, 1, 56, 5, 66, 1, 64, 1, 62, 1, 60, 1, 57, 1, 55, 1, 53, 5, 50, 1, 53, 1, 56, 1, 59, 1, 62, 1, 65, 1, 68, 1, 72, 1, 74, 1, 76, 1, 78, 1, 80, 1, 82, 7, 84, 1, 76, 1, 68, 1, 60, 1, 52, 1, 49, 1, 46, 1, 43, 1, 40, 7, 36, 2, 99, 1, 90, 1, 81, 1, 83, 1, 86, 1, 88, 5, 91, 1, 87, 1, 83, 1, 79, 1, 75, 1, 71, 1, 67, 5, 62, 1, 66, 1, 70, 1, 75, 1, 79, 1, 84, 1, 88, 6, 93, 7, 94, 1, 93, 1, 92, 1, 91, 1, 90, 1, 94, 1, 98, 1, 102, 1, 106, 7, 110, 2, 98, 1, 95, 1, 91, 1, 90, 1, 89, 1, 88, 1, 87, 1, 86, 3, 85, 1, 86, 1, 87, 1, 88, 1, 90, 1, 91, 1, 92, 1, 94, 1, 95, 1, 96, 5, 98, 9, 99, 22, 98, 4, 0, 1, 2, 1, 4, 1, 6, 11, 13, 12, 11, 1, 8, 1, 5, 1, 4, 1, 3, 1, 2, 7, 0, 2, 2, 1, 4, 2, 5, 1, 6, 1, 8, 1, 9, 7, 11, 4, 0, 1, 2, 1, 3, 1, 5, 11, 11, 11, 9, 1, 8, 1, 6, 1, 4, 1, 3, 2, 2, 3, 0, 1, 6, 3, 0, 1, 1, 1, 2, 1, 3, 12, 4, 4, 0, 2, 2, 1, 3, 11, 4, 11, 3, 1, 4, 2, 3, 3, 2, 3, 0, 1, 3, 11, 0, 7, 1, 2, 241, 2, 211, 53, 0, // spherical
54, 60, 66, 26, 42, 62, 38, 8, 2, 6, 1, 8, 1, 10, 1, 12, 5, 14, 2, 15, 8, 16, 2, 15, 7, 14, 1, 12, 1, 10, 1, 8, 9, 6, 1, 11, 1, 16, 7, 22, 1, 18, 1, 14, 1, 10, 1, 9, 1, 8, 1, 7, 5, 6, 1, 9, 1, 12, 1, 15, 8, 18, 2, 26, 1, 37, 1, 49, 1, 60, 3, 72, 1, 65, 1, 58, 1, 51, 1, 44, 6, 36, 1, 43, 1, 50, 1, 57, 1, 64, 7, 72, 1, 61, 1, 49, 1, 38, 9, 26, 1, 32, 1, 38, 7, 44, 1, 51, 1, 58, 4, 65, 5, 66, 1, 62, 1, 57, 1, 53, 8, 48, 2, 81, 1, 84, 1, 87, 1, 90, 3, 93, 1, 96, 1, 99, 1, 103, 1, 106, 6, 110, 1, 107, 1, 104, 1, 100, 1, 97, 7, 93, 1, 90, 1, 87, 1, 84, 9, 81, 1, 83, 1, 85, 7, 87, 1, 90, 1, 93, 1, 96, 1, 102, 1, 108, 1, 114, 5, 121, 1, 107, 1, 92, 1, 77, 8, 62, 41, 98, 1, 97, 1, 96, 1, 95, 1, 94, 1, 93, 4, 91, 1, 92, 1, 93, 1, 94, 1, 95, 1, 96, 17, 98, 2, 0, 1, 2, 1, 3, 1, 5, 24, 11, 1, 8, 1, 4, 1, 3, 7, 2, 2, 0, 1, 3, 1, 6, 7, 15, 1, 9, 1, 4, 8, 2, 1, 0, 1, 2, 1, 3, 1, 5, 8, 9, 2, 0, 1, 2, 1, 3, 1, 4, 4, 8, 2, 6, 1, 5, 7, 4, 2, 5, 1, 6, 7, 8, 1, 5, 1, 3, 1, 2, 6, 0, 1, 1, 2, 0, 1, 2, 1, 4, 7, 9, 1, 5, 1, 3, 3, 2, 1, 1, 3, 0, 1, 1, 1, 0, 1, 2, 1, 3, 1, 4, 8, 8, 2, 0, 1, 1, 1, 2, 1, 3, 3, 4, 2, 3, 2, 2, 6, 1, 3, 2, 1, 3, 7, 4, 1, 3, 2, 2, 11, 0, 13, 1, 5, 0, 1, 1, 2, 2, 8, 3, 2, 211, 50, 0, 2, 241, 18, 0, // filibuster
42, 42, 30, 2, 24, 28, 6, 6, 9, 26, 1, 21, 1, 16, 1, 11, 1, 10, 1, 9, 1, 8, 5, 6, 1, 10, 1, 15, 3, 20, 1, 18, 1, 16, 1, 14, 1, 12, 3, 10, 1, 12, 1, 14, 1, 17, 1, 19, 3, 22, 9, 40, 1, 46, 1, 53, 1, 59, 1, 60, 1, 62, 1, 64, 5, 66, 1, 59, 1, 52, 3, 44, 1, 40, 1, 36, 1, 32, 1, 28, 3, 24, 1, 28, 1, 32, 1, 36, 1, 40, 3, 44, 9, 89, 1, 97, 1, 105, 1, 113, 1, 115, 1, 117, 1, 119, 5, 121, 1, 111, 1, 100, 7, 89, 4, 90, 2, 89, 1, 88, 3, 87, 39, 98, 9, 15, 1, 9, 1, 4, 3, 2, 1, 1, 5, 0, 1, 2, 1, 4, 7, 9, 5, 11, 2, 13, 3, 15, 9, 11, 1, 6, 1, 4, 3, 2, 1, 1, 5, 0, 1, 2, 1, 3, 7, 5, 4, 4, 1, 5, 1, 6, 1, 8, 3, 9, 15, 1, 21, 0, 3, 1, 16, 0, 2, 25, 21, 0, // ottawa
};

const unsigned int wordpos[2][16] = {
{0, 5418, 516, 712, 778, 980, 1174, 1334, 1546, 1782, 2186, 2362, 2508, 3304, 3642, 4210},
{4374, 4590, 5044, 5418, 5760, 6072, 6512, 6902, 7334, 7734, 8086, 8480, 8894, 9232, 9560, 9924},
};
const unsigned char doubleAbsorbOffset[] = {
0, 1, // hello
47, 48, // robot
0, 1, // harder
0, 1, 10, 11, // faster
22, 23, // better
0, 1, // stronger
4, 5, // techno
8, 9, // punk music
0, 1, // hacker
25, 26, // dance
14, 15, 60, 61, 93, 94, // activate laser cannon
30, 31, 75, 76, // crush kill destroy
0, 1, // swag
31, 32, 71, 72, // cryptography
35, 36, // quixotic
41, 42, 76, 77, // galapagos
71, 72, // we alright
8, 9, 49, 50, 72, 73, // propulsion
0, 1, 27, 28, // supernova
47, 48, // climactic
18, 19, 20, 21, 85, 86, // exfoliate
0, 1, 26, 27, 55, 56, // synchronicity
0, 1, 2, 3, // spherical
0, 1, 52, 53, // filibuster
16, 17, // ottawa
};

const unsigned char doubleAbsorbLen[2][16] = {
{2, 0, 2, 0, 2, 4, 2, 2, 2, 2, 2, 2, 6, 0, 4, 2},
{0, 4, 2, 0, 0, 4, 2, 6, 4, 2, 6, 6, 0, 4, 4, 2},
};
const unsigned short doubleAbsorbPos[2][16] = {
{0, 40, 2, 4, 4, 6, 10, 12, 14, 16, 18, 20, 22, 28, 28, 32},
{34, 34, 38, 40, 40, 40, 44, 46, 52, 56, 58, 64, 70, 70, 74, 78},
};

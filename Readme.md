# YellowWindSage Sudoku Solver Project - Spring 2025

## Overview

The objective of this project is to create and solve sudoku puzzles with two different methods. 
One method solves the puzzle with brute force, and the other attempts to be more efficient.
Some major challenges we faced while completing this solver were figuring out how to divide the work up, 
how to make GitHub work optimally, and how to make the efficient solver actually efficient.
We used strategies such as recursion, and using a minimum options variable in the `findNextCell` function.

By completing this project, we learned how to use recursion better by seeing it used in two different contexts.
We also learned how to analyze code to see possibilities for better strategies and methods. 
Collaboration wise we bounced ideas off of each other to come up with the best possible solution we could when we got stuck.
Another important lesson we learned was about code optimization. When running the program, we can clearly see that the `efficientSolver` is not as fast as the regular solve board function when there are less empty cells.
This taught us that even if a solution works, it doesn't always mean it is the best possible solution or form of the solution.


### Part 1: Complete the Code

**GitHub Repository Link:** https://github.com/techdeck891/YellowWindSageSudokuProjectCS2308SPRING2025#

**Collaborators Added:**

Instructor: keshavsbhandari  
TA: tousifulhaque

**Team Members:**

Karsten Salinas (KmanKnight)
Clay Zetune (clayZzz1)
Kai Davidson (techdeck891)

### Part 2: Visualize Program Flow

- Use the following sample code to understand how to visualize program flow:

```cpp
#include <iostream>

void greet() {
    std::cout << "Hello from greet()\n";
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void compute() {
    std::cout << "Inside compute()\n";
    greet();
    int num = 5;
    int fact = factorial(num);
    std::cout << "Factorial of " << num << " is " << fact << "\n";
}

int main() {
    std::cout << "Starting main()\n";
    compute();
    std::cout << "Ending main()\n";
    return 0;
}
```

- Sample flow:

```text
main()
│
├── compute()
│   │
│   ├── greet()
│   │   └── [Prints "Hello from greet()"]
│   │
│   └── factorial(5)
│       └── [Recursively calls factorial(n-1) until n == 1]
│       └── [Returns result to compute()]
│
└── [Prints "Ending main()"]
```

- Create a similar flowchart to illustrate the execution flow of your Sudoku solver in non-DEBUG mode.

### Part 3: Reflective Questions

Answer the following questions in your report:

1. Group Photo:

![img.png](img.png)

2. What contributions did your friends make? List them.

**Karsten**: Completed the majority of the Sudoku and generator files and helped in the completion of the report.   
**Clay**: Completed utils and sudoku_io.h files and helped in completion of the report.   
**Kai**: Completed the majority of the report and helped with the completion of Sudoku and generator files.

3. Why do you think `efficientSolver` took more time than the regular solver? What strategies would you implement to make `efficientSolver` actually efficient?

`efficientSolver` did not universally take more time than regular solver. It was always significantly faster than the regular board solver when there were 64 empty cells. 
However, in the puzzles with less empty cells, it started becoming progressively slower than the regular board solver. This is because the `findNextCell`
function loops through the entire board every single time it's called. So when there are less empty spaces, the `efficientSolver` spends more times looping through the whole board
than the regular solver. When there are less empty cells, the regular solver ends up looping less than the `efficientSolver` because it doesn't have to re-loop through the entire board every time to get the next cell.

Some strategies to implement to make `efficientSolver` faster include searching for naked singles and other basic sudoku rules to reduce the amount of iterations early on. 
It would also be beneficial to be able to save the possible options for other cells to reduce the amount of looping and overhead there is. Some other strategies to improve runtime would be to have an array of coordinates where empty spaces exist, and only iterate through that array instead of the entire board

4. Can you make this a generalized solution, meaning board that can solve any NxN grid where N is a square number? Can you briefly share your ideas?

Yes, It would require minimal changing to the program. 
First, we would receive an input from the user for a square number. Then we would simply replace any place that there is a hardcoded size of 9 with the variable for the square number. 
For example, the for loops in sudoku.cpp would all have to have the loop conditions changed from i < 9 to i < N or whatever the new square number size is.
Then finally you would need to change the start col and start row are calculated by replacing 3 with sqrt(N).

5. Did this project challenge and motivate you? We would appreciate your feedback on your experience. Feel free to share what you learned, what aspects of the project you found most engaging or challenging, and any suggestions you have for improving future projects. Your insights are valuable in helping us enhance future learning experiences.

This project did challenge us to some degree; however, there was very minimal actual coding required. We feel that it would be more beneficial for collaboration and learning if there was more to work on for the project.
There was not enough coding work to evenly and easily split up among our three group members.


## Submission Guidelines

- **Report (Submit as a PDF file):**

    - **Overview:** Provide a broader overview and your take on the project. Include the link to your GitHub repository.
    - **Part 2:** Visualize the flow of the program using a flowchart.
    - **Part 3:** Answer the reflective questions.
    - **Final Thoughts:** Share your concluding thoughts about the project experience.

## Closing Thoughts

Overall, this was a challenging and fun project that encouraged collaboration. 
It was also an exhilarating project idea that provided us with insight on how to come up with ideas for personal projects in the future.
This project taught us many lessons about code development, optimization, and GitHub management.

                  switch(op) {

                     /* Addition */
                     case '+':   ans = num1 + num2;

                                 printf("Answer:   \n", ans);

                                 push(&mystack, ans);

                                 break; 

                     /* Subtraction */
                     case '-':   ans = num1 - num2;

                                 printf("Answer:   \n", ans);

                                 push(&mystack, ans);

                                 break; 

                     /* Multiplication */
                     case '*':   ans = num1 * num2;

                                 printf("Answer:   \n", ans);

                                 push(&mystack, ans);

                                 break; 

                     /* Division */
                     case '/':   ans = num1/num2;

                                 printf("Answer:   \n", ans);

                                 if (num2 == 0) {

                                    printf("Error! Can't Divide by Zero.\n");

                                    exit(0);

                                 }

                                 push(&mystack, ans);

                                 break;

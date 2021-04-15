# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Successful Registration of new User | New Username and password| Message saying "USERNAME AVAILABLE. YOU ARE SUCCESSFULLY REGISTERED" |----------------| Requirement based |
|  H_02       | Successful Login to system| Registered Username and Password | Message saying "YOU ARE SUCCESSFULLY LOGIN" and user successfully logged in to system |----------------| Scenario based    |
|  H_03       | Sucessful completion of Quiz| Answers to 5 questions| Test OutPut Results based on user answers|----------------| Scenario Based   |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Successful Registrtaion to the system| User enters username not existing in database and password | User is successfully registered into the system |----------------| Requirement based    |
|  L_02       | Unsuccessful registrataion to the system| User enters username already existing in the system and password| "USERNAME NOT AVAILABLE. CHOOSE OTHER USERNAME" message will be displayed |----------------| Scenario based |
|  L_03       | Successful Login to the system| User enters username and password registered successfully in the system| User will be successfully logged into the system with message "YOU ARE SUCCESSFULLY LOGIN"|----------------| Scenario based    |
|  L_04       | Unsuccessful login to the system| User enters invalid username or/and password not registered in the system| "INVALID USERNAME OR PASSWORD" message will be displayed|----------------|  Scenario based    |
|  L_05       | User enters choice in welcome screen other than available option | User chooses option other than options 1,2| Printing the message as, "ENTER FROM GIVEN CHOICES ONLY" |----------------| Boundary based    |
|  L_06       | User enters choice in gaming zone other than available option | User chooses option other than options 1,2,3| Printing the message as, "ENTER FROM GIVEN CHOICES ONLY" |----------------| Boundary based    |
|  L_07       | User chooses to view instructions | User chooses option 1 in quiz gaming zone| "Displaying quiz game instructions to user |----------------| Boundary based    |
|  L_08       | User chooses to attempt quiz | User chooses option 2 in quiz gaming zone| Displaying quiz game to the user |----------------| Boundary based    |
|  L_09       | User enters option in quiz gaming other than available option | User enters answer other than options A,B,C,D| Printing the message as, "CHOOSE FROM GIVEN 4 OPTIONS" |----------------| Boundary based    |
|  L_10       | User enters correct answer to a question| User enters correct answer from available options| "CORRECT" message will be displayed|----------------| Scenario based    |
|  L_11       | User enters incorrect answer to a question | User enters incorrect answer from available options| "SORRY ACTUAL ANSWER IS A(correct answer)" message will be displayed|----------------| Scenario based    |
|  L_12       | User successfully answers all questions | User answers all questions based on his knowledge | Score will be displayed and user will be navigated to homescreen of quiz gaming zone----------------|Requirement based    |
|  L_13       |Exit Functionality  | User clicks on Exit Button| "HOPE YOU ENJOYED!!!BYE" message will be displayed |----------------| Requirement based    |


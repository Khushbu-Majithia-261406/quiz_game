/**
 * @file quiz_header.h
 * @author Khushbu Majithia (261406)
 * @brief Functions to register, login, play_game, view instructions of quiz, attempt)quiz and logout
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __QUIZ_HEADER_H__
#define __QUIZ_HEADER_H__


/**
 * @brief Error values for register and login operations
 * 
 */

typedef enum error_t {
    FAILURE=0,
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;


/**
* @brief registers a user into the system
 * 
 * @param[in] name Username
 * @param[in] pass password
 */

int reg(char name[30], char pass[30]);



/**
* @brief validates user login credentials
 * 
 * @param[in] name Username
 * @param[in] pass password
 */
int login(char name[30], char pass[30]);





/**
* @brief takes user to the quiz game zone
 
 */
void play_game();





/**
* @brief provides quiz instructions to user
 
 */
void view_instructions();





/**
* @brief presents quiz to user
 
 */

void attempt_quiz();




/**
* @brief logs out user from the system
 
 */
void quit();


#endif
#!/bin/bash

#attempting to add
git add .

#checking the exit status of the git add command. Typical exist status is 0
if [ $? -eq 0 ]; then
	#this message confirms a successful git add command
	echo -e "\e[33mgit add command successful\e[0m\n"

	#if the git add is successful, i want to commit by receiving a commit message
	echo "Enter your commit message: "
	read commit_message
	
	#this is where the git commit command is actually done
	git commit -m "$commit_message"
	
	#checking if git commit was successful
	if [ $? -eq 0 ]; then

		#this message confirms a successful git commit
		echo -e "\e[33mgit commit successful\e[0m\n"

		#attempting to push my changes
		git push
		
		#checking if git push is succesful
		if [ $? -eq 0 ]; then

			#the next two echo commands confirms a successful push and prints my commit message
			echo -e "\n\e[33mgit push successful"
			echo -e "\e[33mYour commit message\e[0m: $commit_message\n"
		
		else
			#a git push failure message
			echo -e "\e[31mgit push failed\e[0m\n"
		fi
	
	else
		#a git commit failure message
		echo -e "\e[31mgit commit failed\e[0m\n"
	
	fi

else
	#a git add failure message
	echo -e "\e[31mgit add command failed\e[0m\n"

fi

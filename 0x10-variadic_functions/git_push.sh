#!/bin/bash
git add .

if [ $? -eq 0 ]; then
	echo -e "git add command successful\n"
else
	echo -e "git add command failed\n"
fi

echo "Enter your commit message: "
read commit_message

git commit -m "$commit_message"

if [ $? -eq 0 ]; then
	echo -e "git commit successful\n"
else
	echo -e "git commit failed\n"
fi

git push

if [ $? -eq 0 ]; then
	echo -e "\ngit push successful\n"
	echo -e "Your commit message: $commit_message\n"
else
	echo -e "git push failed\n"
fi

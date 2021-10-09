# creating a folder named programs in home directory
mkdir ~/programs

# change the working directory to programs
cd programs

#initializing git local repository
git init

#configuring git local repository
git config user.email kumar.me18@bsathy.ac.in
git config user.name kumar-me18
git config credential.helper store

#link remote repository
git remote add origin https://github.com/git-username/programs.git

#creating git credentials (to avoid username password everytime)
echo "https://rv-nataraj:personal_Access_token@github.com" > ~/.git-credentials 

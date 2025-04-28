    1 
    2  touch dementor-invasion.c
    3  git add .\
    4  cd /mnt/c/Users/Shahed/desktop/IEEE_SSCS_SWE
    5  cd IEEE-SSCS-SWE
    6  git add .
    7  git commit -m "last"
    8  git push origin main
    9  git reset --soft HEAD~1
   10  git push origin main --force
   11  touch rollback-task.sh
   12  cat history > rollback-task.sh
   13  history > rollback-task.sh

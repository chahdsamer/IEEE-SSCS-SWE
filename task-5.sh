    1  
    2 cd desktop
    3  cd IEEE_SSCS_SWE
    4  touch output.txt
    5  touch error.txt
    6  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/numbers.txt
    7  wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/all_in_one.c
    8  gcc all_in_one.c main
    9  gcc all_in_one.c -o main
   10  ./main < numers.txt > output.txt 2> error.txt
   11  ./main < numbers.txt > output.txt 2>error.txt
   12  touch task-5.sh
   13  history > task-5.sh

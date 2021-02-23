#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int readend=0;
int writeend=1;
int msg_to_write;
int msg_read;
int p_to_c_pipe[2];
pipe(p_to_c_pipe);
int pid=fork();
if(pid>0){
	close(p_to_c_pipe[readend]);
	dup2(p_to_c_pipe[writeend],STDOUT_FILENO);
	cin>>str_to_send;
	cout<<msg_to_write<<endl;
	close(p_to_c_pipe[writeend]);
	}
else{
	close(p_to_c_pipe[writeend]);
	dup2(p_to_c_pipe,STDIN_FILENO);
	cin>>msg_read;
	cout<<msg_read<<endl;
	close(p_to_c_pipe[readend]);
	}
return 0;
}

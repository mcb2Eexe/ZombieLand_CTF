#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define SEP "\n\n=================================================================================================\n"
#define BLOG "https://mcbdefence.com"
#define KEY 3


char warmup();
void level_1(char tmp);
int level_2(int num);
char level_3(char c1);
void level_4();
void level_5(int d5b);
void banner();
void humin();
void zombie(int fail);
char *x1(char *string);
char *r1(int num2, char *string2);


int main(){
    banner();
    printf("\n \"Welcome to Zombieland kid! You've got to be smart to survive out here!\"\n\n \"Jump in and lets go for a ride...and take this pistol just in case...\"");
    printf("%s", SEP);
    int tmp = warmup();
    printf("%s", SEP);
    level_1(tmp);
    printf("%s", SEP);
    int num = level_2(num);
    printf("%s", SEP);
    char c1 = level_3(c1);
    printf("%s", SEP);
    level_4();
    printf("%s", SEP);
    level_5(num);
    printf("%s", SEP);
    printf("\n\n \"Good going kid! You survived a day in Zombieland! This is as far as I can take you but you've proved you can survive out here on your own now. There's a car there you can take and don't worry, I'm sure we'll meet again.\"\n\n \"Anyway, I'm no good at goodbyes so...that'll do pig!\"");
    if(c1 == 'S'){
        printf("\n\n You say your goodbyes, check the back seat and get in the car. You put your seat belt on and head off to continue your journey alone...");
        end();
        printf("\n\n Look out for more CTFs and walkthroughs coming soon on:\n\n [%s]\n", BLOG);
        exit(0);
    }
    else{
        int tmp = 8;
        zombie(tmp);
    }
    return 0;
}


char warmup(){
    int ret;
    char twink;
    printf("\n\n You're driving down the road and you notice a twinky truck...");
    while(1){
            printf(" Stop for a twinky? [Y]es or [N]o? ");
            scanf(" %c", &twink);
            if(twink == 'Y'){
                printf("\n You head down to the truck to grab a twinky but its full of snowballs!\n\n \"I hate cocunut! Not the taste...its the consistency!\"");
                ret = 1;
                break;
            }
            else if(twink == 'N'){
                printf("\n You pass up the twinky and carry on down the road...");
                ret = 0;
                break;
            }
            else{
                printf("\n \"C'mon pay attention, you're gona get us killed!\"");
            }
    }
    humin();
    return ret;
}


void level_1(char tmp){
    char c1a[] = "lunges";
    char guess[8];
    if(tmp == 1){
        zombie(tmp);
    }
    else{
        printf("\n You notice the gas is running low so you stop at the next gas station.");
        printf("\n\n \"This could get hairy. Lets limber up just in case.\"\n\n Choose your warmup: ");
        scanf(" %s", guess);
        if (strcmp(c1a, guess) == 0){
            printf("\n \"Sweet! Now we're ready for anything, lets get this over with...\"");
        }
        else{
            tmp = 2;
            zombie(tmp);
        }
    }
    humin();
    return;
}


int level_2(int num){
    char s2a[10], s2b[] = "nbga";
    printf("\n\n You're about to start filling up the car when your belly grumbles. You look at the dark, dingy gas station and you wish you'd grabbed that twinky earlier. ");
    printf("\n\n \"There might be some twinkies in the gas station. Lets go in and look...\"");
    printf("\n\n As you walk in, a zombie bursts out the toilet and runs at you!\n\n What are you going to do?: ");
    scanf(" %s", s2a);
    num = (strlen(s2a) / 2);
    if  ((s2a[0] == s2b[1]) && (s2a[1] == s2b[3]) && (s2a[2] == s2b[0]) && (s2a[3] == s2b[2])){
        printf("\n Luckily, you remembered Rule 3: Beware of bathrooms! Your ready for it! You've never used a gun before but you're inhaler is a similar shape so you know what you have to do! You draw the pistol like an asthmatic Clint Eastwood and blow it away!");
        printf("\n\n Thank god for Rule 14! You quickly run into the bathroom and sort yourself out...");
    }
    else{
        int tmp = 3;
        zombie(tmp);
    }
    humin();
    return num;
}


char level_3(char c1){
    int i3a, j3a = 0;
    char s3a[9], s3b[9], s3c[] = "zlBnSaoO24GeliI", s3d[] = "dYbWqlL8wsSk5jfduU8";
    printf("\n\n You start looking around and grab the first thing you see: ");
    scanf("%s", s3a);
    if (strlen(s3a) != 9){
        int tmp = 4;
        zombie(tmp);
    }
    for (i3a = 8; i3a >= 0; i3a--){
        s3b[j3a] = s3a[i3a];
        j3a++;
    }
    s3b[i3a] = '\0';
    if ((s3b[0] == s3d[9]) && (s3b[7] == s3c[3]) && (s3b[1] == s3d[5]) && (s3b[6] == s3c[6]) && (s3b[2] == s3c[1]) && (s3b[5] == s3d[8]) && (s3b[3] == s3c[5]) && (s3b[4] == s3d[2])){
            printf("\n \"Do you want to feel how hard I can punch!?\"");
            c1 = s3b[8];
    }
    else{
        int tmp = 4;
        zombie(tmp);
    }
    humin();
    return c1;
}


void level_4(){
    int d4a, d4b, i4a;
    char s4a[10];
    printf("\n\n You decide to leave them for your own good and keep looking! You can't believe your luck! Finally you find some twinkies!\n\n How many will you take? ");
    scanf(" %d", &d4a);
    printf("\n There's a gun cabinet at the back full of rifles. How many will you take? ");
    scanf(" %d", &d4b);
    for(i4a= 0; i4a < 10; i4a++){
        s4a[i4a] = (i4a * d4a) + d4b;
    }
    s4a[i4a] = '\0';
    if ((s4a[0] == 2) && (s4a[7] == 93)){
        printf("\n Good! You've got everything you can carry so you head out...");
    }
    else{
        int tmp = 5;
        zombie(tmp);
    }
    humin();
    return;
}


void level_5(int d5b){
    int d5a, d5c;
    char s5a[7], s5c[] = "Mbzovr", s5d[5];
    if(d5b == KEY + 1 ){
            printf("\n The zombie you smoked earlier is lying at the door. Luckily you stuck to rule 2 and double tapped it in the head so you can rest easy...");
    }
    else{
        int tmp = 6;
        zombie(tmp);
    }
    printf("\n\n As you go to walk out, a tag on the rifle you took sets off the alarm and a security system traps you inside!");
    printf("\n\n There's a panel next to the door which can turn off the security system but its encrypted!");
    printf("\n\n Luckily, you did your Certified Ethical Hacker course before the apocalypse so you should be able to hack it no sweat ;) \n The sound of the alarms going to attract zombies so you'll have to hurry...");
    printf("\n\n Enter the first key: ");
    scanf(" %s", s5a);
    char *enc = x1(s5a);
    if (strcmp(enc, s5c) == 0){
        printf("\n Good job! That's layer one down...");
    }
    else{
        int tmp = 7;
        zombie(tmp);
    }
    printf("\n\n Enter the second key: ");
    scanf(" %d", &d5a);
    if ((d5a % 4) == 3 ){
        printf("\n Right again! Almost done...");
        d5c = (d5a % 4) * 4 + 1;
    }
    else{
        int tmp = 7;
        zombie(tmp);
    }
    printf("\n\n One more key to go: ");
    scanf(" %s", s5d);
    if(strlen(s5d) == 4){

    }
    else{
        int tmp = 7;
        zombie(tmp);
    }
    char *enc2= r1(d5c, s5d);
    if(strcmp(enc2, "obmg") == 0){
        char *secret1 = x1(enc2);
        char *secret2 = r1(KEY * 4 + 1, enc);
        printf("\n You enter the last key and a message pops up:\n\n [ Password = %s%s ]\n\n Phew! Your unrivalled hacking skills saved the day! You enter the password and the security system deactivates before any zombies are attracted to you.", secret2, secret1);
    }
    else{
        int tmp = 7;
        zombie(tmp);
    }
    humin();
    return;
}


char *x1(char *string){
    int x1a;
    char *enc = malloc(strlen(string) + 1);
    for (x1a = 0; x1a < strlen(string); x1a++){
         enc[x1a] = string[x1a] ^ (int)KEY;
    }
    enc[x1a] = '\0';
    return enc;
}


char *r1(int num2, char *string2){
    int x2a;
    char x2b;
    char *enc2 = malloc(strlen(string2) + 1);
    for (x2a = 0; x2a < strlen(string2); x2a++){
        x2b = string2[x2a];
        if((x2b + num2) <= 'z'){
            enc2[x2a] = x2b+ num2;
            }
        else{
            enc2[x2a] = x2b - num2;
        }
    }
         enc2[x2a] = '\0';
         return enc2;
}


void banner(){
	printf("\n    ___________________________________________________________________________\n");
	printf("   |                                                                           |\n");
    	printf("   |   |Zombieland|Beginner CTF|V1.0|                 ..======.                |\n");
	printf("   |                                                  ||::: : |                |\n");
	printf("   |	 .====.                                  .~.===: : : :|   ..===.       |\n");
	printf("   |	 |.::.||      .=====.      .======= _    |:|: :|::::::|   ||:::|=====| |\n");
	printf("   |  ___| :::|!__.   |:::::|!_    |: :: ::|:|   |:|:: |:;;:::|___!| ::|: : :| |\n");
	printf("   | |: :|::: |:: |!__|; :: |: |===::: :: :|:| _ |:| : |: :: :|: : |:: |:::::| |\n");
	printf("   | |:::| _::|: :|:::|:===:|::|:::|:=====:|:!/|\\!:|:: |:====:|::_:|: :|::__:| |\n");
	printf("   | !_[]![_]_!_[]![]_!_[__]![]![_]![_][__]!//_:_\\\\![] ![_][_]!_[_]![]_!_[__]! |\n");
	printf("   | ---------------------------------------       --------------------------- |\n");
	printf("   | _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |\n");
	printf("   |                                                                           |\n");
	printf("   |__________________________________________________________________________ |\n");
	printf("   |-------------------------------------------------------------------------- |\n");
	printf("   |   -------------------------------------------------------------------     |\n");
	printf("   |  | Author: mcb2Eexe | Twitter: @mcb2Eexe | Blog: https://mcbdefence.com |    |\n");
	printf("   |   -------------------------------------------------------------------     |\n");
	printf("   -----------------------------------------------------------------------------\n");
	return;
}


void zombie(int fail){
	switch (fail){
	    case (1): printf("\n\n Oh no! You forgot Rule 18: Always limber up! You get jumped and you don't get away in time!");
	    break;
	    case (2): printf("\n\n You try a different exercise and hurt your leg just as a zombie bursts out the gas station. You can't run fast enough to get away!");
	    break;
	    case (3): printf("\n\n Your hunger makes you forget Rule 27: Incoming! You're caught off guard and over powered!");
	    break;
        case (4): printf("\n\n You reach for something on the top shelf and knock the hole shelf over. The noise attracts a swarm of zombies and you're overrun.");
        break;
        case (5): printf("\n\n A few zombies burst out the back. You forgot Rule 7: Travel light! You got too greedy and all the stuffs too heavy to make an escape.");
        break;
	    case (6): printf("\n\n Oh no! You forgot Rule 2: Always double tap! The zombie you thought was dead by the door springs up and feasts on your leg as you step over it!");
        break;
        case (7): printf("\n\n You panic and your hacking skills let you down! You lock out the panel and have no escape. Eventually you'll be overrun by swarms of zombies attracted by the alarm...");
        break;
        case (8): printf("\n\n You jump in the car and put your seat belt on.... but you forgot Rule 31: Check the back seats! A zombie grabs you from behind and turns you into a human happy meal!");
        break;
	}
	printf ("\n      _________________________________  \n");
	printf ("      |                               | \n");
	printf ("      |          ____\\|/____          | \n");
	printf ("      |         /           \\         | \n");
	printf ("      |        /    \\  /     \\        | \n");
    	printf ("      |      (.    0    0     .)      | \n");
	printf ("      | ----  |      \\/       |  ---- | \n");
	printf ("      |||||| >\\   VVVVVVVVV  / < |||||| \n");
	printf ("      | VVVV \\ |  |       |  | / VVVV | \n");
	printf ("      |    \\  \\ \\ \\/\\/\\/\\/  / /  /    | \n");
	printf ("      |     \\  \\ \\_________/ /  /     | \n");
	printf ("      |      \\       \\ /       /      | \n");
	printf ("   ___|       |       |        |      |_____\n");
	printf ("  |           |       |        |            |\n");
	printf ("  |           |       |        |            | \n");
	printf ("  |           |       |        |            | \n");
	printf ("  | __   __             ___              __ |\n");
	printf ("  | \\ \\ / /___ __ __   |   \\  __  __   _| | | \n");
	printf ("  |  \\ V // _ \\| || |  | |) || |/ -_)/ _` | | \n");
	printf ("  |   |__|\\___/ \\_,_|  |___/ |_|\\___|\\__,_| | \n");
	printf ("  |_________________________________________| \n");
	humin();
	exit(0);
}


void humin(){
    printf("\n\n [Press ENTER key to continue]\n");
    getch();
    return;
}


void end(){
	printf("\n    _____________________________________ \n");
	printf("   |                                     |\n");
    	printf("   |     )  /(( )\\   )\\                  |\n");
    	printf("   |    ( )(_))((_)(((_)                 |\n");
    	printf("   |    (_(_()|(_)_ )\\___                |\n");
    	printf("   |    |_   _|| _ |(/ __|               |\n");
    	printf("   |      | |  | _ \\| (__   _   _   _    |\n");
    	printf("   |      |_|  |___/ \\___| (_) (_) (_)   |\n");
	printf("   |_____________________________________|\n");
    return;
}

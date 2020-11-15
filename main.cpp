#include <iostream>
#include "conio.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>

#define PAUSE printf("Press Enter to continue..."); fgetc(stdin);  

using namespace std;
int stats[8]={5,5,1,1,0,0,0,0};
vector<vector<char>> levelmap(5, vector<char>(5, '0'));
vector<vector<char>> combatlevel(7, vector<char>(7, '0'));
//char levelmap[5][5];
//char combatlevel;
int battlegenerateweakness();
int kingbattle(int x[8]);
void alienquote();


void specialevent(int x){
}

void cd(string x){//stands for chapter display
    system("clear");
    cout<<x<<endl<<endl;
    PAUSE;
}

int story(int x[8]){
    switch(x[5]){
    case 0:
        cd("???: Thank god! You're awake!");
        cd("???: Thought you were dead when I saw you lying on the hill!");
        cd("???: You don't like one of us though...Are you a foreigner?");
        cd("???: What? An adventurer from another planet?");
        cd("???: That is so cool! What should I call you?");
        cd("???: Charley? That's a great name!");
        cd("Nez'ko: Ah, where are my manners... I am Nez'ko, the... I mean, a citizen of planet Sram.");
        cd("Nez'ko: You have places to go? Samples?... I don't understand quite well though... See you soon I guess?");
        return 0;
    case 1:
        cd("Hey Charley, how have you been?");
        if(x[6]>0){
            cd("Nez'ko: Your hand smells weird... Smells like our blood... Consider washing them?");
            cd("Nez'ko: Anyway, I can be your guide and show you around! There's a lot of cool things around here!");
        } else {
            cd("Nez'ko: I can be your guide and show you around! There's a lot of cool things around here!");
        }
        cd("Nez'ko: Not free? Ahaha, sorry... Another time then!");
        return 0;
    case 2:
        cd("Nez'ko: Helloooo~ It's me again!");
        if(x[6]==2){
            cd("Nez'ko: Ugh, you still haven't wash your hands?");
            cd("Nez'ko: Is it because you can't find water?");
            cd("Nez'ko: \"Leave me alone?\" Why are you being so rude? I'm just trying to help...");
            cd("She ran off.");
        } else if(x[6]==1){
            cd("Nez'ko: Ugh, would you uhh, wash your hands? It smells like our blood.");
            cd("Nez'ko: Anyway...I got you the best snack of Sram-\"Eci Cream\", give it a try!");
            cd("You tried the Eci Cream, it was surprisingly good");
            cd("Nez'ko: Haha! I know right? It's so tasty!");
            cd("She smiles while her antenna shakes gently.");
            cd("Nez'ko: Ah, you have places to go right... See you soon!");
        } else {
            cd("Nez'ko: Look what I found! The best snack of Sram-\"Eci Cream\", give it a try!");
            cd("You tried the Eci Cream, it was surprisingly good");
            cd("Nez'ko: Haha! I know right? It's so tasty!");
            cd("She smiles while her antenna wiggles gently.");
            cd("Nez'ko: Ah, you have places to go right... See you soon!");
            cd("Nez'ko: What, you have something to tell me?");
            cd("You: Gomapsunda. (Thank you in Sram language)");
            cd("Her smile widens.");
            cd("Nez'ko: Guess you got along with us quite well!");
        }
        return 0;
    case 3:
        if(x[6]==4){
            cd("Nez'ko: Hello... Um... Why are you staring at me like that...");
            cd("Nez'ko: You are scary...");
            cd("She ran off.");
        } else if(x[6]>=1 && x[6]<4){
            cd("Nez'ko: Where is all that smell of our blood coming from?");
            cd("Nez'ko: Anyway...as I was saying...");
            cd("Her antenna suddenly twitches.");
            cd("Nez'ko: Sorry I'm getting a phone call. Hold on.");
            cd("She went somewhere to answer the call and you heard some of the lines:");
            cd("No father, that's not true! He wouldn't do that!");
            cd("She came back a while later.");
            cd("Nez'ko: Sorry, I have something to do, see you later.");
        } else {
            cd("Nez'ko: Hey charley! Are you free today?");
            cd("You nodded");
            cd("Nez'ko: Great! I can show you around then! I have prepared a list of...");
            cd("Her antenna suddenly twitches.");
            cd("Nez'ko: Sorry I'm getting a phone call. Hold on.");
            cd("She went somewhere to answer the call and you heard some of the lines:");
            cd("No father, you can't just go and capture him! He's friendly!");
            cd("She came back a while later.");
            cd("Nez'ko: Sorry, I have something to do, can't hang out with you today... Sorry that I got your hypes up...");
        }
        return 0;
    case 4:
        cd("Nez'ko did not show up.");
        if(x[6]==6){
            cd("You don't want that brat to show up anyway.");
        }
        return 0;
    case 5:
        cd("You saw Nez'ko again. She didn't wear her usual dress today, instead, she was wearing suit armor and held a sword in hand");
        if(x[6]==9){
            cd("Nez'ko: *Sighs*");
            cd("Nez'ko: My father has told me that, you have killed every single person that you have met.");
            cd("Nez'ko: I don't believe that, I think he was just being unfriendly.");
            cd("Nez'ko: I told him \"then I would've been dead\" but he was too stubborn to listen.");
            cd("Nez'ko: Then he sent me to kill you. And... I couldn't.");
            cd("She drops her sword.");
            cd("Nez'ko: You might be weird, but you're definitely not that kind of person.");
            cd("Nez'ko: Come with me, I will take you to my father- King Taecae, and I promise we will talk this out.");
            cd("Nez'ko: I see you are approaching, eager to see the king of Sram?");
            cd("You stabbed Nez'ko through the chestplate using a pocket knife with all your might, she fell onto the ground");
            cd("Nez'ko: I... wanted to protect you from the dangers of this planet...");
            cd("Nez'ko: Seems like you are not the one that I should be protecting...");
            system("clear");
            x[4]+=100;
            cout<<"You have killed princess Nez'ko and scavenged 100 Dark Matter"<<endl;
            x[6]++;
            x[7]++;
            PAUSE
        }
        if(x[6]>=1 && x[6]<9){
            cd("Nez'ko: *Sighs*");
            cd("Nez'ko: My father has told me that, you have killed some of our citizens.");
            cd("Nez'ko: So he sent me to capture you. And... I couldn't.");
            cd("She drops her sword.");
            cd("Nez'ko: You might be weird, but you're definitely not that kind of person.");
            cd("Nez'ko: I know that, because we've spent time together... Remember that Eci Cream?");
            cd("She smiles.");
            cd("Nez'ko: I can't take you to prison...");
            cd("Nez'ko: You should go and talk to King Taecae yourself, it is just over the hill.");
            cd("Nez'ko: I will just stay in this area until you find my dad.");
            cd("Nez'ko: When the reinforcements come, I will stall them for you.");
            cd("Nez'ko: What are you waiting for? Go!");
            cout<<"Press K to kill Nez'ko"<<endl;
            cout<<"Press N to leave"<<endl;
            char choice;
            do
            {
                choice = getch();
                switch(choice){
                case 'K':
                case 'k':
                    cd("You backstabbed Nez'ko while she was off guard. She presses her hands onto the wounds, but the bleeding won't stop");
                    cd("Nez'ko: Why...");
                    cd("I thought we were... Friends...");
                    system("clear");
                    x[4]+=100;
                    cout<<"You have killed princess Nez'ko and scavenged 100 Dark Matter"<<endl;
                    x[6]++;
                    x[7]++;
                    PAUSE
                    cd("You left her body there and advanced.");
                    break;
                case 'N':
                case 'n':
                    cd("You wave her goodbye and advanced.");
                    break;
                }
            } while(true);
        }
        if(x[6]==0){
            cd("Nez'ko: *Sighs*");
            cd("Nez'ko: My father has told me that, there's a new alien in town.");
            cd("Nez'ko: So he sent me to capture you. And... I couldn't.");
            cd("She drops her sword.");
            cd("Nez'ko: You are not an alien to me. Instead, you are a really nice friend.");
            cd("Nez'ko: I know that, because we've spent time together... Remember that Eci Cream?");
            cd("She smiles.");
            cd("Nez'ko: You should go and talk to King Taecae yourself, it is just over the hill.");
            cd("Nez'ko: I will just stay in this area until you find my dad.");
            cd("Nez'ko: When the reinforcements come, I will stall them for you.");
            cd("Nez'ko: What are you waiting for? Go!");
            cd("You: Gomapsunda. (Thank you)");
            cd("You: Najune Boyejo. (Show me around Sram later)");
            cd("Tears roll down her face as she smiled brighter.");
            cd("You hugged her goodbye and advanced.");
        }
        return 0;
    case 12:
        cd("King Taecae: You have finally arrived.");
        if(x[6]==37){
            cd("King Taecae: Why?");
            cd("King Taecae: Not answering? Here is a better question:");
            cd("King Taecae: What do you want from us?");
            cd("King Taecae: You have killed every person you've met.");
            cd("King Taecae: Including my daughter.");
            cd("King Taecae: I'm not sure for others, but my daughter is the kindest person I've ever met...");
            cd("King Taecae: And you killed... her...");
            cd("His expression shifted.");
            cd("King Taecae: Feel the anguish of the dead.");
            if(kingbattle(stats)==1){
                return 1;
            }
            cd("King Taecae feel onto the polished ground of the palace.");
            cd("King Taecae: I'm sorry... my people.");
            cd("King Taecae: Nez'ko, dad is coming...");
            return 4;
        } if(x[6]<37 && x[6]>0 && x[7]<0){
            cd("King Taecae: Several citizens have been missing and my daughter told me that you're not the murderer.");
            cd("King Taecae: I wanted to believe but now, I cannot.");
            cd("King Taecae: When you walked in, there's the smell of blood.");
            cd("King Taecae: And your hands and arms are stained with blood.");
            cd("King Taecae: You could fool my innocent daughter...");
            cd("His expression shifted.");
            cd("King Taecae: but you can't fool me...");
            cd("King Taecae: Now face your judgement.");
            if(kingbattle(stats)==1){
                return 1;
            }
            cd("King Taecae feel onto the polished ground of the palace.");
            cd("King Taecae: You're stronger than I thought... I should have given my all...");
            return 2;
        } if(x[6]<37 && x[7]==1){
            cd("King Taecae: Several citizens have been missing and my daughter told me that you're not the murderer.");
            cd("King Taecae: And I couldn't find my daughter with telekinesis.");
            cd("King Taecae: She was friendly and naive... No one would even think of killing her.");
            cd("His expression shifted.");
            cd("King Taecae: It was your doing wasn't it?");
            cd("King Taecae: Now face your judgement.");
            if(kingbattle(stats)==1){
                return 1;
            }
            cd("King Taecae feel onto the polished ground of the palace.");
            cd("King Taecae: You're stronger than I thought... I should have given my all...");
            cd("King Taecae: At least...I'm going to see my daughter again...");
            return 3;
        } if(x[6]==0){
            cd("King Taecae: You're the new alien in town that everyone was talking about.");
            cd("King Taecae: Sorry. I shouldn't call you that.");
            cd("King Taecae: You have made friends with everyone you've met.");
            cd("King Taecae: You even learnt some new words from us, correct?");
            cd("You: Hoy. (yeah.)");
            cd("He laughs.");
            cd("King Taecae: Come, let me show you around the palace. I'll call my daughter here, too.");
            cd("King Taecae: Oh and uhh... Could you be our ambassador? We'd love to make some connections with humans.");
            cd("King Taecae: You'd be a great ambassador.");
            cd("You nods");
            cd("King Taecae: Haha... I'm glad.");
            cd("Nez'ko: Father! Charley!");
            cd("King Taecae: There she is!");
            cd("Nez'ko: I've missed you Charley!");
            cd("Nez'ko hugs you tightly");
            cd("King Taecae: I've never seen such a heartwarming scene... Ever since your mother passed...");
            cd("Nez'ko: Don't bring up the sad memories, let's have fun today!");
            cd("King Taecae: You're right, then let's go shall we?");
            cd("Nez'ko, You: Hoy!");
            return 0;
        }
    }
}

void save(){//Alex
}

char randomstrength(){
    int temp=rand()%4;
    switch(temp){
    case 0:
        return '1';
    case 1:
        return '2';
    case 2:
        return '3';
    case 3:
        return '4';
    case 4:
        return '5';
    }
}

int Hangman(int x[8]){//Alex
    return 0;
}

void battlegenerate(vector<vector<char>> &x){
    int maxwall=24;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            x[i][j]='0';
        }
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            int temp=rand()%100;
            if(maxwall!=0 && temp<33){
                x[i][j]=randomstrength();
                maxwall--;
            }
        }
    }
    for(int i=4;i<7;i++){
        for(int j=0;j<3;j++){
            x[i][j]='0';
        }
    }
    x[3][3]='X';
    x[0][6]='F';
    x[6][0]='E';
}

void kingbattlegenerate(vector<vector<char>> &x){
    int maxwall=30;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            x[i][j]='0';
        }
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            int temp=rand()%100;
            if(maxwall!=0 && temp<40){
                x[i][j]='U';
                maxwall--;
            }
        }
    }
    for(int i=4;i<7;i++){
        for(int j=0;j<3;j++){
            x[i][j]='0';
        }
    }
    x[3][3]='X';
    x[6][0]='E';
}

int battlegenerateweakness(vector<vector<char>> &x){
    bool generated=false;
    while(generated==false){
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                if(i==6 && j==0){
                    continue;
                }
                int temp=rand()%100;
                if(temp<3 && x[i][j]=='0'){
                    x[i][j]='W';
                    return i*10+j;
                }
            }
        }
    }
}

int kingbattle(int x[8]){//died return 1, killed king return 0;extra enemy HP, extra enemy attack range, enemy can break thru walls when stuck; genocide=>weakpoints run away from player, more karma
    int y=x[1];
    kingbattlegenerate(combatlevel);
    int karma=6-(x[6]-1)/12-x[7];
    int wpos=battlegenerateweakness(combatlevel);
    int wposy=wpos/10;
    int wposx=wpos%10;
    int wkptmoved=0;
    combatlevel[0][6]='0';
    int enehp=50+2*x[6]+10*x[7];
    int stun=0;
    int regeneraterefresh=10;
    bool stuck=true;
    int evadechance=(3*100/(2+x[2]));
    bool regenerate=false;
    int regeneratecooldown=3;
    char movement=0;
    int enexpos=0;
    int eneypos=6;
    int prevxpos=3;
    int prevypos=3;
    int xpos=3;
    int ypos=3;
    do
    {
        system("clear");
        if(karma<0){
            y--;
            karma++;
            if(y==0){
                return 1;
            }
        }
        cout<<"King Taecae's HP: "<<enehp<<endl<<endl;
        cout<<"Your HP: "<<y<<endl<<"Karma(Your HP will start to decrease when this reaches 0, move vertically or break a wall to refresh this value): "<<karma<<endl;
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                cout<<combatlevel[i][j]<<" ";
            }
        cout<<endl;
        }
        movement = getch();
        switch(movement)
        {
            case 'W':
            case 'w':
                if(ypos!=0){
                    karma=6-(x[6]-1)/12-x[7];
                    if(combatlevel[ypos-1][xpos]=='0'){
                        ypos--;
                        break;
                    } else if(combatlevel[ypos-1][xpos]=='W'){
                        ypos--;
                        stun=4;
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    } else if(combatlevel[ypos-1][xpos]=='U'){
                        ypos--;
                        y--;
                        karma=6-(x[6]-1)/12-x[7];
                        if(y==0){
                            return 1;
                        }
                        break;
                    }
                }
                continue;
            case 'S':
            case 's':
                if(ypos!=7){
                    karma=6-(x[6]-1)/12-x[7];
                    if(combatlevel[ypos+1][xpos]=='0'){
                        ypos++;
                        break;
                    } else if(combatlevel[ypos+1][xpos]=='W'){
                        ypos++;
                        stun=4;
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    } else if(combatlevel[ypos+1][xpos]=='U'){
                        ypos++;
                        y--;
                        karma=6-(x[6]-1)/12-x[7];
                        if(y==0){
                            return 1;
                        }
                        break;
                    }
                }
                continue;
            case 'A':
            case 'a':
                if(xpos!=0){
                    karma--;
                    if(combatlevel[ypos][xpos-1]=='0'){
                        xpos--;
                        break;
                    } else if(combatlevel[ypos][xpos-1]=='W'){
                        xpos--;
                        stun=4;
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    } else if(combatlevel[ypos][xpos-1]=='U'){
                        xpos--;
                        y--;
                        karma=6-(x[6]-1)/12-x[7];
                        if(y==0){
                            return 1;
                        }
                        break;
                    }
                }
                continue;
            case 'D':
            case 'd':
                if(xpos!=7){
                    karma--;
                    if(combatlevel[ypos][xpos+1]=='0'){
                        xpos++;
                        break;
                    } else if(combatlevel[ypos][xpos+1]=='W'){
                        xpos++;
                        stun=4;
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    } else if(combatlevel[ypos][xpos+1]=='U'){
                        xpos++;
                        y--;
                        karma=6-(x[6]-1)/12-x[7];
                        if(y==0){
                            return 1;
                        }
                        break;
                    }
                }
                continue;
        }
        combatlevel[prevypos][prevxpos]='0';
        combatlevel[ypos][xpos]='X';
        prevypos=ypos;
        prevxpos=xpos;
        int moved=0;
        if(stun>0){
            moved++;
            stun--;
        }
        if(moved==0){
            if(xpos-enexpos>0){
                if(combatlevel[eneypos][enexpos+1]=='0' || combatlevel[eneypos][enexpos+1]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    enexpos++;
                    moved++;
                } else if(combatlevel[eneypos][enexpos+1]=='U' && stuck==true){
                    combatlevel[eneypos][enexpos+1]='0';
                    stuck=false;
                    moved++;
                } else if(combatlevel[eneypos][enexpos+1]=='W'){
                    combatlevel[eneypos][enexpos]='0';
                    stun=2;
                    moved++;
                    enehp-=x[0];
                    enexpos++;
                    regenerate=true;
                    if(enehp==0){
                        return 0;
                    }
                }
            }
        }
        if(moved==0){
            if(xpos-enexpos<0){
                if(combatlevel[eneypos][enexpos-1]=='0' || combatlevel[eneypos][enexpos-1]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    enexpos--;
                    moved++;
                } else if(combatlevel[eneypos][enexpos-1]=='U' && stuck==true){
                    combatlevel[eneypos][enexpos-1]='0';
                    stuck=false;
                    moved++;
                } else if(combatlevel[eneypos][enexpos-1]=='W'){
                    combatlevel[eneypos][enexpos]='0';
                    stun=3;
                    moved++;
                    enehp-=x[0];
                    enexpos--;
                    regenerate=true;
                    if(enehp==0){
                        return 0;
                    }
                }
            }
        }
        if(moved==0){
            if(ypos-eneypos>0){
                if(combatlevel[eneypos+1][enexpos]=='0' || combatlevel[eneypos+1][enexpos]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    eneypos++;
                    moved++;
                } else if(combatlevel[eneypos+1][enexpos]=='U' && stuck==true){
                    combatlevel[eneypos+1][enexpos]='0';
                    stuck=false;
                    moved++;
                } else if(combatlevel[eneypos+1][enexpos]=='W'){
                    combatlevel[eneypos][enexpos]='0';
                    stun=3;
                    moved++;
                    enehp-=x[0];
                    eneypos++;
                    regenerate=true;
                    if(enehp==0){
                        return 0;
                    }
                }
            }
        }
        if(moved==0){
            if(ypos-eneypos<0){
                if(combatlevel[eneypos-1][enexpos]=='0' || combatlevel[eneypos-1][enexpos]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    eneypos--;
                    moved++;
                } else if(combatlevel[eneypos-1][enexpos]=='U' && stuck==true){
                    combatlevel[eneypos-1][enexpos]='0';
                    stuck=false;
                    moved++;
                } else if(combatlevel[eneypos-1][enexpos]=='W'){
                    combatlevel[eneypos][enexpos]='0';
                    stun=3;
                    moved++;
                    enehp-=x[0];
                    eneypos--;
                    regenerate=true;
                    if(enehp==0){
                        return 0;
                    }
                }
            }
        }
        if(moved==0){//wall break
            stuck=true;
        } else {
            stuck=false;
        }
        if((enexpos+1==xpos && eneypos==ypos) || (enexpos-1==xpos && eneypos==ypos) || (enexpos==xpos && eneypos-1==ypos) || (enexpos==xpos && eneypos+1==ypos) || (enexpos==xpos && eneypos==ypos)){
            if(stun==0){
                int temp=rand()%100;
                combatlevel[eneypos][enexpos]='0';
                if(temp<evadechance){
                    combatlevel[ypos][xpos]='D';
                    y--;
                    if(y==0){
                        return 1;
                    }
                } else {
                    combatlevel[ypos][xpos]='N';
                }
                enexpos=0;
                eneypos=6;
            }
        }
        combatlevel[eneypos][enexpos]='E';
        prevypos=ypos;
        prevxpos=xpos;
        if(regenerate==true){
            if(regeneratecooldown!=0){
                wpos=battlegenerateweakness(combatlevel);
                wposy=wpos/10;
                wposx=wpos%10;
                regeneratecooldown=3;
                regeneraterefresh=10;
                regenerate=false;
            } else {
                regeneratecooldown--;
            }
        }
        if(regeneraterefresh>0){
            regeneraterefresh--;
        } else {
            combatlevel[wposy][wposx]='0';
            wpos=battlegenerateweakness(combatlevel);
            wposy=wpos/10;
            wposx=wpos%10;
            regeneraterefresh=10;
        }
        if(x[6]==37){
            if(wkptmoved==0){
                if(xpos-wposx>0 && wposx!=0){
                    if(combatlevel[wposy][wposx-1]=='0'){
                        combatlevel[wposy][wposx]='0';
                        combatlevel[wposy][wposx-1]='W';
                        wposx--;
                        wkptmoved+=2;
                    }
                }
            }
            if(wkptmoved==0){
                if(xpos-wposx<0 && wposx!=6){
                    if(combatlevel[wposy][wposx+1]=='0'){
                        combatlevel[wposy][wposx]='0';
                        combatlevel[wposy][wposx+1]='W';
                        wposx++;
                        wkptmoved+=2;
                    }
                }
            }
            if(wkptmoved==0){
                if(ypos-wposy>0 && wposy!=0){
                    if(combatlevel[wposy-1][wposx]=='0'){
                        combatlevel[wposy][wposx]='0';
                        combatlevel[wposy-1][wposx]='W';
                        wposy--;
                        wkptmoved+=2;
                    }
                }
            }
            if(wkptmoved==0){
                if(ypos-wposy<0 && wposy!=6){
                    if(combatlevel[wposy+1][wposx]=='0'){
                        combatlevel[wposy][wposx]='0';
                        combatlevel[wposy+1][wposx]='W';
                        wposy++;
                        wkptmoved+=2;
                    }
                }
            }
            wkptmoved--;
            if(wkptmoved<=0){
                wkptmoved=0;
            }
        }
    } while (true);
}

int Battle(int x[8], int &y){
    battlegenerate(combatlevel);
    battlegenerateweakness(combatlevel);
    int enehp=20+x[6]*2;
    int evadechance=(3*100/(2+x[2]));
    bool regenerate=false;
    char movement=0;
    int enexpos=0;
    int eneypos=6;
    int prevxpos=3;
    int prevypos=3;
    int xpos=3;
    int ypos=3;
    do
    {
        system("clear");
        cout<<"Enemy HP: "<<enehp<<endl<<endl;
        cout<<"Your HP: "<<y<<endl<<endl;
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                cout<<combatlevel[i][j]<<" ";
            }
        cout<<endl;
        }
        movement = getch();
        switch(movement)
        {
            case 'W':
            case 'w':
                if(ypos!=0){
                    if(combatlevel[ypos-1][xpos]=='0'){
                        ypos--;
                        break;
                    } else if(combatlevel[ypos-1][xpos]>'0' && combatlevel[ypos-1][xpos]<='4'){
                        combatlevel[ypos-1][xpos]--;
                        break;
                    } else if(combatlevel[ypos-1][xpos]=='F'){
                        return 2;
                    } else if(combatlevel[ypos-1][xpos]=='W'){
                        ypos--;
                        combatlevel[0][6]='0';
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    }
                }
                continue;
            case 'S':
            case 's':
                if(ypos!=7){
                    if(combatlevel[ypos+1][xpos]=='0'){
                        ypos++;
                        break;
                    } else if(combatlevel[ypos+1][xpos]>'0' && combatlevel[ypos+1][xpos]<='4'){
                        combatlevel[ypos+1][xpos]--;
                        break;
                    } else if(combatlevel[ypos+1][xpos]=='F'){
                        return 2;
                    } else if(combatlevel[ypos+1][xpos]=='W'){
                        ypos++;
                        combatlevel[0][6]='0';
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    }
                }
                continue;
            case 'A':
            case 'a':
                if(xpos!=0){
                    if(combatlevel[ypos][xpos-1]=='0'){
                        xpos--;
                        break;
                    } else if(combatlevel[ypos][xpos-1]>'0' && combatlevel[ypos][xpos-1]<='4'){
                        combatlevel[ypos][xpos-1]--;
                        break;
                    } else if(combatlevel[ypos][xpos-1]=='F'){
                        return 2;
                    } else if(combatlevel[ypos][xpos-1]=='W'){
                        xpos--;
                        combatlevel[0][6]='0';
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    }
                }
                continue;
            case 'D':
            case 'd':
                if(xpos!=7){
                    if(combatlevel[ypos][xpos+1]=='0'){
                        xpos++;
                        break;
                    } else if(combatlevel[ypos][xpos+1]>'0' && combatlevel[ypos][xpos+1]<='4'){
                        combatlevel[ypos][xpos+1]--;
                        break;
                    } else if(combatlevel[ypos][xpos+1]=='F'){
                        return 2;
                    } else if(combatlevel[ypos][xpos+1]=='W'){
                        xpos++;
                        combatlevel[0][6]='0';
                        enehp-=x[0];
                        regenerate=true;
                        if(enehp==0){
                            return 0;
                        }
                        break;
                    }
                }
                continue;
        }
        combatlevel[prevypos][prevxpos]='0';
        combatlevel[ypos][xpos]='X';
        prevypos=ypos;
        prevxpos=xpos;
        if(regenerate==true){
            battlegenerateweakness(combatlevel);
            regenerate=false;
        }
        int moved=0;
        if(moved==0){
            if(xpos-enexpos>0){
                if(combatlevel[eneypos][enexpos+1]=='0' || combatlevel[eneypos][enexpos+1]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    enexpos++;
                    moved++;
                }
            }
        }
        if(moved==0){
            if(xpos-enexpos<0){
                if(combatlevel[eneypos][enexpos-1]=='0' || combatlevel[eneypos][enexpos-1]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    enexpos--;
                    moved++;
                }
            }
        }
        if(moved==0){
            if(ypos-eneypos>0){
                if(combatlevel[eneypos+1][enexpos]=='0' || combatlevel[eneypos+1][enexpos]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    eneypos++;
                    moved++;
                }
            }
        }
        if(moved==0){
            if(ypos-eneypos<0){
                if(combatlevel[eneypos-1][enexpos]=='0' || combatlevel[eneypos-1][enexpos]=='X'){
                    combatlevel[eneypos][enexpos]='0';
                    eneypos--;
                }
            }
        }
        if(enexpos==xpos && eneypos==ypos){
            int temp=rand()%100;
            if(temp<evadechance){
            combatlevel[eneypos][enexpos]='D';
            y--;
                if(y==0){
                    return 1;
                }
            } else {
                combatlevel[eneypos][enexpos]='N';
            }
            enexpos=0;
            eneypos=6;
        }
        combatlevel[eneypos][enexpos]='E';
        prevypos=ypos;
        prevxpos=xpos;
    } while (true);
}

void alienquote(int x){
    int temp=rand()%2;
    if(x<6){
        switch(temp){
        case 0:
            cout<<"How may I help you, adventurer?"<<endl;
            break;
        case 1:
            cout<<"Hello adventurer, great day innit?"<<endl;
            break;
        case 2:
            cout<<"Good day, adventurer!"<<endl;
            break;
        }
    } else if (x>=6 && x<11){
        switch(temp){
        case 0:
            cout<<"Is there something wrong?"<<endl;
            break;
        case 1:
            cout<<"Is there something on my face?"<<endl;
            break;
        case 2:
            cout<<"What is it?"<<endl;
            break;
        }
    } else if (x>=11 && x<16){
        switch(temp){
        case 0:
            cout<<"Why are you looking at me like that?"<<endl;
            break;
        case 1:
            cout<<"What is your problem?"<<endl;
            break;
        case 2:
            cout<<"Do I owe you something?"<<endl;
            break;
        }
    } else if (x>=16 && x<21){
        switch(temp){
        case 0:
            cout<<"Get away from me!"<<endl;
            break;
        case 1:
            cout<<"Don't come closer!"<<endl;
            break;
        case 2:
            cout<<"I don't have money!"<<endl;
            break;
        }
    } else {
        switch(temp){
        case 0:
            cout<<"Please spare me!"<<endl;
            break;
        case 1:
            cout<<"Don't kill me!"<<endl;
            break;
        case 2:
            cout<<"Please... I have children to feed!"<<endl;
            break;
        }
    }
    cout<<"\nPress K to try to kill the alien."<<endl;
    cout<<"Press N to try to talk to the alien."<<endl;

}

void Tutorial(){//Alex

}

void Load(){//Alex

}

void levelgenerate(vector<vector<char>> &x,int a){
    int y=a;
    int z=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            x[i][j]='0';
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==4 && j==0 || j==4 && i==0){
                continue;
            }
            int temp=rand()%100;
            if(z!=0 && temp<6){
                x[i][j]='C';
                z--;
            }
        }
    }
    while(y>0){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(i==4 && j==0 || j==4 && i==0){
                    continue;
                }
                int temp=rand()%100;
                if(y!=0 && temp<12 && x[i][j]!='A'){
                    x[i][j]='A';
                    y--;
                }
            }
        }
    }
    x[4][0]='X';
}

int Levelstart(int x[8]){//ATK, HP, SPD, DEX, DM, Level, Kills, Killed princess (1 or 0), //return 1=dead=>level lost=>gameover return 2=flee/negotiation fail=>player back to starting position
    int currentalien=(x[5]+2)/2;
    system("clear");
    levelgenerate(levelmap,currentalien);
    int floatincome;
    int income;
    int currenthp=x[1];
    int prevxpos=0;
    int prevypos=4;
    int xpos=0;
    int ypos=4;
    do
    {
        if(currentalien==0){
                levelmap[0][4]='F';
        }
        char movement=0;
        system("clear");
        cout<<"Level "<<x[5]<<endl<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<levelmap[i][j]<<" ";
            }
        cout<<endl;
        }
        cout<<"\n";
        cout<<"Current HP: "<<currenthp<<endl;
        cout<<"(Press P to see all stats)"<<endl;
        movement = getch();
        switch(movement)
        {
            case 'W':
            case 'w':
                if(ypos!=0){
                    ypos--;
                }
                break;
            case 'S':
            case 's':
                if(ypos!=4){
                    ypos++;
                }
                break;
            case 'A':
            case 'a':
                if(xpos!=0){
                    xpos--;
                }
                break;
            case 'D':
            case 'd':
                if(xpos!=4){
                    xpos++;
                }
                break;
            case 'P':
            case 'p':
                cout<<"Attack: "<<x[0]<<endl;
                cout<<"Max Health Points: "<<x[1]<<endl;
                cout<<"Speed: "<<x[2]<<endl;
                cout<<"Dexterity: "<<x[3]<<endl;
                cout<<"Dark Matter: "<<x[4]<<endl;
                cout<<"Level: "<<x[5]<<endl;
                cout<<"Kills: "<<x[6]<<endl;
                PAUSE
                break;
        }
        if(levelmap[ypos][xpos]=='0'){
            levelmap[ypos][xpos]='X';
            levelmap[prevypos][prevxpos]='0';
            prevypos=ypos;
            prevxpos=xpos;
        } else if(levelmap[ypos][xpos]=='A'){
            char choice=0;
            system("clear");
            alienquote(x[6]);
            int outcome=9;
            int righttochoose=1;
            do
            {
                if(righttochoose==1){
                    choice = getch();
                }
                switch(choice)
                {
                    case 'K':
                    case 'k':
                    outcome=Battle(stats, currenthp);
                    switch(outcome){
                        case 1:
                            return 1;
                        case 0:
                            system("clear");
                            floatincome=rand()%5;
                            income=3*(15+floatincome)*(10+x[3])/10;
                            x[4]+=income;
                            cout<<"You have killed the alien and scavenged "<<income<<" Dark Matter"<<endl;
                            PAUSE
                            currentalien--;
                            x[6]++;
                            levelmap[ypos][xpos]='X';
                            levelmap[prevypos][prevxpos]='0';
                            prevypos=ypos;
                            prevxpos=xpos;
                        case 2:
                            xpos=prevxpos;
                            ypos=prevypos;
                            levelmap[ypos][xpos]='X';
                    }
                    continue;
                    case 'N':
                    case 'n':
                        if(x[6]>=6 && x[6]<11){
                            system("clear");
                            cout<<"But you don't want to."<<endl;
                            PAUSE
                            righttochoose--;
                            choice = 'K';
                            continue;
                        } else if(x[6]>=11 && x[6]<16){
                            system("clear");
                            cout<<"But you want to kill it instead."<<endl;
                            PAUSE
                            righttochoose--;
                            choice = 'K';
                            continue;
                        } else if(x[6]>=16 && x[6]<21){
                            system("clear");
                            cout<<"Why do you want to talk to them? Isn't it fun to watch them die?"<<endl;
                            PAUSE
                            righttochoose--;
                            choice = 'K';
                            continue;
                        } else if(x[6]>=21){
                            system("clear");
                            cout<<"T h e y   d o   n o t   d e s e r v e   t o   l i v e ."<<endl;
                            PAUSE
                            righttochoose--;
                            choice = 'K';
                            continue;
                        }
                        outcome=Hangman(stats);
                        switch(outcome){
                            case 0:
                                system("clear");
                                floatincome=rand()%5;
                                income=2*(15+floatincome)*(10+x[3])/10;
                                x[4]+=income;
                                cout<<"You two had a great chat and he gifted you "<<income<<" Dark Matter"<<endl;
                                PAUSE
                                currentalien--;
                                levelmap[ypos][xpos]='X';
                                levelmap[prevypos][prevxpos]='0';
                                prevypos=ypos;
                                prevxpos=xpos;
                            case 2://cancelled
                                xpos=prevxpos;
                                ypos=prevypos;
                                levelmap[ypos][xpos]='X';
                        }
                    continue;
                }
            } while (outcome== 9);
        } else if(levelmap[ypos][xpos]=='C'){
            system("clear");
            floatincome=rand()%5;
            income=(15+floatincome)*(10+x[3])/10;
            x[4]+=income;
            cout<<"You have found "<<income<<" Dark Matter in the chest, and your health is recovered!\n";
            int currenthp=x[1];
            PAUSE
            levelmap[ypos][xpos]='X';
            levelmap[prevypos][prevxpos]='0';
            prevypos=ypos;
            prevxpos=xpos;
            currenthp=x[1];
        } else if(levelmap[ypos][xpos]=='F'){
            system("clear");
            cout<<"level "<<x[5]<<" completed\n";
            PAUSE
            return 0;
        }
    } while (true);

    return 0;
}

void upgrade(int x[8]){
    char upgrades='9';
        do
        {
        system("clear");
        cout<<"Press 1 to level up your ATK (increase Attack Damage during battle)\n";
        cout<<"Press 2 to level up your Max HP (increase Max Health)\n";
        cout<<"Press 3 to level up your SPD (increase chance of evading an enemy attack during battle)\n";
        cout<<"Press 4 to level up your DEX (increase gold income)\n";
        cout<<"Press 0 to finish\n\n";

        cout<<"You have "<<x[4]<<" Dark Matter"<<endl;
        cout<<"ATK: "<<x[0]<<", level up cost: "<<30*(x[0]-4)<<endl;
        cout<<"Max HP: "<<x[1]<<", level up cost: "<<30*(x[1]-4)<<endl;
        cout<<"SPD: "<<x[2]<<", level up cost: "<<30*(x[2])<<endl;
        cout<<"DEX: "<<x[3]<<", level up cost: "<<30*(x[3]/2)<<endl;
        upgrades = getch();
        switch(upgrades)
        {
            case '1':
                if(x[4]>=30*(x[0]-4)){
                    x[4]-=30*(x[0]-4);
                    x[0]++;
                } else {
                    system("clear");
                    cout<<"You do not have enough Dark Matter!"<<endl;
                    PAUSE
                }
                break;
            case '2':
                if(x[4]>=30*(x[1]-4)){
                    x[4]-=30*(x[1]-4);
                    x[1]++;
                } else {
                    system("clear");
                    cout<<"You do not have enough Dark Matter!"<<endl;
                    PAUSE
                }
                break;
            case '3':
                if(x[4]>=30*(x[2])){
                    x[4]-=30*(x[2]);
                    x[2]++;
                } else {
                    system("clear");
                    cout<<"You do not have enough Dark Matter!"<<endl;
                    PAUSE
                }
                break;
            case '4':
                if(x[4]>=30*(x[3]/2)){
                    x[4]-=30*(x[3]/2);
                    x[3]++;
                } else {
                    system("clear");
                    cout<<"You do not have enough Dark Matter!"<<endl;
                    PAUSE
                }
                break;
        }
    } while (upgrades!='0');
}

int Gamestart(int x[8]){//return 1=killed return, return 2=ending1...etc
    while(x[5]<11){
        if(Levelstart(stats)==1){
            return 1;
        }
        upgrade(stats);
        x[5]++;
        story(stats);
        save();
    }
    x[5]++;
    switch(story(stats)){
    case 1:
        return 1;
    case 0:
        return 0;
    }
}


int main(){
    cout << R"(
________________________________________________________________________________________
__/_____|_|_______|_____/\_____|_____\_____/_____|_|_______|__/____\__|_____\__\_\___/_/
_|_(_________|_|_______/__\____|_|__)_|___|_(_________|_|____|_|__|_|_|_|__)_|__\_\_/_/_
__\____\_____|_|______/_/\_\___|_____/_____\____\_____|_|____|_|__|_|_|_____/____\___/__
______)_|____|_|_____/______\__|_|_\_\_________)_|____|_|____|_|__|_|_|_|_\_\_____|_|___
_|_____/_____|_|____/_/____\_\_|_|__\_\___|_____/_____|_|_____\____/__|_|__\_\____|_|___
________________________________________________________________________________________
________________________________________________________________________________________
                                      )"
    <<endl;
    cout<<"Press N for new game and C to load previous save file."<<endl;
    srand(time(NULL));
//    vector<vector<char>> levelmap(5, vector<char>(5, '0'));
//    vector<vector<char>> combatlevel(7, vector<char>(7, '0'));
    char mainmenu=0;
    int gameover=9;
    do
    {
        mainmenu = getch();

        switch(mainmenu)
        {
            case 'N':
            case 'n':
                story(stats);
                gameover=Gamestart(stats);
                break;
            case 'C':
            case 'c':
                Load();
                gameover=Gamestart(stats);
                break;
        }
    } while (gameover==9);
    system("clear");
    switch(gameover){
    case 1:
        cout<<"You have died!"<<endl;
        return 0;
    case 0:
        cd("Several years later:");
        cd("The people on Earth has moved to Sram, and they live peacefully with the locals.");
        cd("Since the population on Earth has decreased sharply, the energy shortage on Earth was solved as well.");
        cd("THE END.");
        return 0;
    case 2:
        cd("Several months later:");
        cd("You became the ruler of Sram as King Taecae was slained by you.");
        cd("Nez'ko challenged you, knowing that you killed her father.");
        cd("She couldn't bear to finish you when you were beat down.");
        cd("Then you killed her while she was off guard.");
        cd("Several years later:");
        cd("The people on Earth has moved to Sram. And the citizens of Sram were imprisoned.");
        cd("Since the population on Earth has decreased sharply, the energy shortage on Earth was solved as well.");
        cd("THE END.");
        return 0;
    case 3:
        cd("Several months later:");
        cd("You became the ruler of Sram as King Taecae and Princess Nez'ko were both slained by you.");
        cd("Several years later:");
        cd("The people on Earth has moved to Sram. And the citizens of Sram were imprisoned.");
        cd("Since the population on Earth has decreased sharply, the energy shortage on Earth was solved as well.");
        cd("THE END.");
        return 0;
    case 4:
        cd("Several months later:");
        cd("You have killed every single alien on Sram.");
        cd("Several years later:");
        cd("The people on Earth has moved to Sram.");
        cd("Since the population on Earth has decreased sharply, the energy shortage on Earth was solved as well.");
        cd("THE END.");
        return 0;
    }

}

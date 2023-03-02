
# Hedonic Games Coalition Formation Model

Hedonic games are a type of cooperative game in game theory that model situations in which players form coalitions based on their individual preferences or "pleasure" (hence the term "hedonic"). In these games, players can form coalitions based on their preferences for certain outcomes, with each coalition having a characteristic value or payoff.

In a hedonic game, players seek to maximize their payoff by forming coalitions with other players who share similar preferences. The players may form multiple coalitions, and each coalition's payoff depends on the preferences of its members. The goal of the players is to find a stable coalition structure, in which no player has an incentive to leave their coalition and join another.

This project is a part of a course "Algorithmic Game Theory" I undertook at IIT Kharagpur. It tries to model groups based on friend/Enemy and suggests you the best group to join based on a normalized score.


## Deployment

To deploy this project, download all the given CPP files and run the main.cpp file.

On running the file you will be asked number of players and your name, considering you as a part of the game.

```bash
  Enter the total number of players: 7
  Enter your name: param
```
Now other players, will be also included in the game.

```bash
Enter other players name(first name only): john dave mojo 
will bill jill
```

The friends of each player have to be defined to be able to form groups.

```bash
Enter the no. of friends of bill: 2
Enter the friends' name of bill: dave mojo
Enter the no. of friends of dave: 1
Enter the friends' name of dave: jill
Enter the no. of friends of jill: 3
Enter the friends' name of jill: will dave john
Enter the no. of friends of john: 2
Enter the friends' name of john: param dave
Enter the no. of friends of mojo: 3
Enter the friends' name of mojo: dave param bill
Enter the no. of friends of param: 2
Enter the friends' name of param: john mojo
Enter the no. of friends of will: 1
Enter the friends' name of will: jill
```

We need to define the groups that are already formed, the main player need not to be included as a choice for the main player will be made on which group they might join!

```bash
Enter the number of groups to form: 3
Number of people in Group #1: 3
Enter the names of Group #1 members: jill dave john
Number of people in Group #2: 4
Enter the names of Group #2 members: john mojo will bill
Number of people in Group #3: 3
Enter the names of Group #3 members: dave will jill
```

The final output looks something like this:

```bash
Friend Based Strategy: param should join Group #2
{ john mojo will bill }
Enemy Based Strategy: param should not join any group.
```

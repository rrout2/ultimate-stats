# Development Log for Final Project
## 4/16/18
* Decided to follow through with [Idea 2](https://github.com/uiuc-sp18-cs126/final-project-rrout2/blob/master/PROPOSAL.md)
* Worked on setting up Qt GUI on Mac OS 
* Learned about basics of signals, slots, and events. 

## 4/17/18
* Made classes for Player and Roster objects
* Very basic GUI to add players to roster on opening screen
* Can remove players with "undo" button

![BasicRoster](https://raw.githubusercontent.com/uiuc-sp18-cs126/final-project-rrout2/master/screenshots/rostering1.png?token=Acz5q8Xqd-t8pSMErPh66kFdfHNTotWRks5a4AliwA%3D%3D)

## 4/23/18
* Learned how to add second GUI window
* Added ability to choose offense vs. defense
* Can choose 7 players for each line
* Next: need to add individual offense and defense GUIs
![AddingToLine1](https://raw.githubusercontent.com/uiuc-sp18-cs126/final-project-rrout2/master/screenshots/7online1.png?token=Acz5q3Z-QcVDmzOFCfhbKkV-S1ZLkvlGks5a6AyjwA%3D%3D)
![AddingToLine2](https://raw.githubusercontent.com/uiuc-sp18-cs126/final-project-rrout2/master/screenshots/7online2.png?token=Acz5q56csr0BbcLEGwr36KwG1A8xjptoks5a6AylwA%3D%3D)

## 4/24/18
* Connected chooseside.ui to offense.ui and defense.ui
* Having problem with 10th(?) position in rostering, offset checkbox
![problem](https://raw.githubusercontent.com/uiuc-sp18-cs126/final-project-rrout2/master/screenshots/problem_offset.png?token=Acz5q2AfxQfkzIrrtp_t1NSEySIfo67Qks5a6SdkwA%3D%3D)
* Added extensive offensive UI grid in order to keep track of yards gained
* Green areas to delineate endzones
* added throwing_yards and receiving_yards stat for player class
* buttons not yet functional, so no stats tracked yet
![fullfiel](https://raw.githubusercontent.com/uiuc-sp18-cs126/final-project-rrout2/master/screenshots/fullfieldO.png?token=Acz5q6L1cUDUtEaQjQsB9Cv8irfibqYnks5a6W8twA%3D%3D)
* Added basic defense GUI w/o functionality.

## 4/25/18
* need to figure out way to seamlessly go between offense and defense UIs
* Program keeps crashing on offense click from chooseside 😢
* when offense does work, throwaway and drop buttons work usually, but not yet keeping track of offensive stats. 
* defense has semi-functional 'D' and 'Opp. throwaway' buttons, hopefully keeping track of D stat
* removed green endzones temporarily because they blocked buttons for some reason
* added additional backend offensive trackers to keep track of who has disc, and how far upfield each throw/catch goes
* long way to go
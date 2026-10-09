# ⚽ Futstats

**Futstats** is a console-based football statistics and fun-features application written in **C++**. Browse detailed squad data, manager and club information for 34 top-flight clubs across five European leagues, then jump into a fantasy team builder, a simulated tournament, a "build your own legacy" career projector, a playstyle-based team recommender, and a two-player football quiz.

Built as a 2nd-semester Object-Oriented Programming project (~4,600 lines, single source file).

---

## Table of Contents

- [Features](#features)
- [Leagues & Clubs Covered](#leagues--clubs-covered)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [OOP Concepts Demonstrated](#oop-concepts-demonstrated)
- [Project Structure](#project-structure)
- [Data Notes](#data-notes)
- [Future Improvements](#future-improvements)

---

## Features

### 1. Club Details
Pick a league, then a club, to open that club's menu:

| Option | What you get |
|---|---|
| **Squad Details** | Full 25-man squad table (name, nationality, position, age, shirt number, matches, goals, assists, market value) plus automatic analytics: top scorer, top assister, most appearances, oldest/youngest player, most valuable player, best goals + assists, positional breakdown, foreign-player count, total & average squad value, and average squad age |
| **Club Trophies** | Total trophies, Champions League titles, and league titles |
| **League Position** | Current position, matches played/won/lost/tied, total points, and average points per game |
| **Manager Details** | Name, nationality, age, trophies won, and tenure |
| **Owner Details** | Owner / president of the club |
| **Upcoming Matches** | Fixtures grouped by league, European, and cup competitions with date, time, venue, and matchday |
| **Stadium** | Stadium name and capacity |

---

### 2. Fantasy Football
Build your own team from a pool of **154 players** (attackers, midfielders, defenders, goalkeepers) drawn from the clubs in the database.
- Start with a **1500M** budget
- Select **3 attackers, 3 midfielders, 4 defenders, 1 goalkeeper**, and **3 substitutes**
- Duplicate-selection checks and range validation for each position
- Live remaining-budget tracking and a final team summary with total cost

---

### 3. Tournament Simulator
Name your team and play through a simulated mini-tournament. Game results and scorelines are generated from a value stored in `Project.txt`, which is updated after every run so each tournament plays out differently.

---

### 4. Design Your Own Career ("Build Your Own Legacy")
Create a custom player — **Forward, Defender, Goalkeeper, or Midfielder** — enter your name, favourite club, age, and position-specific stats (pace, passing, physicality, plus dribbling/shooting, tackling/defence, handling, or attacking/defending). Futstats then projects your stats **5 years into the future**, with growth for young players and decline for older ones.

---

### 5. Team Suggestions
Select the playstyle traits you enjoy — *Counter Attacking, Aggressive, Good Link-ups, Low Block, Possession, Tiki-Taka, Slow Build-up, Fast Build-up, Wing Play, Long Balls, One-Touch Passing* — and Futstats recommends clubs worth watching.

---

### 6. Football Quiz
A two-player quiz with four questions each. Scores are tracked per player and combined using an overloaded `+` operator.

---

## Leagues & Clubs Covered

| League | Clubs |
|---|---|
| 🇪🇸 **LaLiga** (9) | FC Barcelona, Real Madrid, Atlético Madrid, Sevilla, Villarreal, Valencia, Real Betis, Real Sociedad, Athletic Bilbao |
| 🇩🇪 **Bundesliga** (6) | Bayern Munich, Borussia Dortmund, RB Leipzig, Eintracht Frankfurt, Borussia Mönchengladbach, Bayer 04 Leverkusen |
| 🏴󠁧󠁢󠁥󠁮󠁧󠁿 **Premier League** (10) | Chelsea, Manchester United, Manchester City, Liverpool, Arsenal, Tottenham Hotspur, Newcastle United, Aston Villa, Brighton, Leicester City |
| 🇮🇹 **Serie A** (7) | Juventus, Napoli, AC Milan, Inter Milan, AS Roma, Lazio, Atalanta |
| 🇫🇷 **Ligue 1** (2) | Paris Saint-Germain, Olympique Lyonnais |

---

## Getting Started

### Prerequisites
- A C++ compiler (e.g. **g++**, **MinGW**, or **MSVC**)
- Works in any terminal / console

### Build

```bash
g++ -o futstats Futstats.cpp
```

### Set up the tournament file
The tournament feature reads from a text file in the same folder as the executable. Create `Project.txt` containing a single number:

```bash
echo 1 > Project.txt
```

### Run

```bash
./futstats        # Linux / macOS
futstats.exe      # Windows
```

> **Note:** The source uses `fflush(stdin)`, which behaves best on Windows compilers (e.g. Dev-C++ / MinGW). It still compiles on Linux and macOS.

---

## Usage

On launch you'll see the main menu:

```
WELCOME TO FUT STATS

Please Choose From The Following Options :

1-CLUB DETAILS
2-FANTASY FOOTBALL
3-TOURNAMENT
4-DESIGN YOUR OWN CAREER
5-TEAM SUGGESTIONS
6-FOOTBALL QUIZ
7-EXIT
```

Enter the number of the feature you want. For **Club Details**, you'll then choose a league → a club → a section of that club's menu. Every submenu has an **EXIT** option to take you back.

---

## OOP Concepts Demonstrated

| Concept | Where it's used |
|---|---|
| **Inheritance** | `person` → `players`, `coach`; `Player` → `Goalkeeper`, `Defender`, `Forward`, `midfielder` |
| **Encapsulation** | Private/protected data with getters and setters across all classes |
| **Templates** | `match<T>` and `club<T>` are class templates (matchday can be an `int` or `string` such as "Semi-Finals 1st Leg") |
| **Method overriding** | `display()` and `print()` extended in derived classes, `changestats()` specialised per position |
| **Operator overloading** | Friend `operator+` on the `quiz` class to combine scores |
| **Static members** | Shared score counters in `quiz` |
| **Dynamic memory** | Match arrays allocated with `new` inside the `club` constructor |
| **File handling** | `ifstream` / `ofstream` for the tournament's persistent state |
| **Exception handling** | `try` / `catch` input checks in the career creator |
| **Composition** | A `club` contains players, a coach, and matches |

---

## Project Structure

```
Futstats/
├── Futstats.cpp    # Entire application (classes, club data, menus, main)
├── Project.txt     # Tournament state file (create manually, see setup)
└── README.md
```

Inside `Futstats.cpp`:

| Section | Purpose |
|---|---|
| `person`, `coach`, `players` | Base and derived classes for people in the data |
| `quiz` | Two-player quiz logic |
| `match<T>` | Templated fixture class |
| `<Club>_players()`, `<Club>_manager()`, `<Club>_matches()` | Per-club data factory functions |
| `club<T>` | Club class with all analytics and the club menu |
| `Player` hierarchy | Career creator with position-specific classes |
| `fantasy()`, `tournament()`, `card()`, `suggestion()` | Feature functions |
| `menu()` / `main()` | Navigation and program entry |
| `Admin` | Login class for a (currently disabled) data-editor mode |

---

## Data Notes

Player, manager, and fixture data is **hard-coded** and reflects a snapshot of the **2022/23 season**. Market values are in millions.

---

## Future Improvements

- Load club and player data from files or a database instead of hard-coding
- Enforce the fantasy budget and add scoring based on player stats
- Enable the admin login + edit mode for updating squads and fixtures
- Replace `goto`-based menu flow with loops and functions
- Split the single file into headers and modules (`players.h`, `club.h`, `quiz.h`, …)
- Add input validation across all menus
- Add a GUI or web front-end
- Add API for real time player statistics and matches instead of hard code.

---

## Authors

*Talha Munir Saeed*

---

## License

*Add a license if you plan to publish this (e.g. MIT).*

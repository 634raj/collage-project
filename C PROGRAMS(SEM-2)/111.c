#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATES 10

struct Candidate {
    char name[50];
    int votes;
};

struct Candidate candidates[MAX_CANDIDATES];
int numCandidates = 0;

void addCandidate(const char *name) {
    if (numCandidates < MAX_CANDIDATES) {
        strcpy(candidates[numCandidates].name, name);
        candidates[numCandidates].votes = 0;
        numCandidates++;
        printf("Candidate '%s' added successfully.\n", name);
    } else {
        printf("Maximum number of candidates reached.\n");
    }
}

void castVote(int candidateIndex) {
    if (candidateIndex >= 0 && candidateIndex < numCandidates) {
        candidates[candidateIndex].votes++;
        printf("Vote casted for candidate '%s'.\n", candidates[candidateIndex].name);
    } else {
        printf("Invalid candidate index.\n");
    }
}

void displayResults() {
    printf("Candidate\tVotes\n");
    for(int i = 0; i < numCandidates; i++) {
        printf("%s\t\t%d\n", candidates[i].name, candidates[i].votes);
    }
}

int main() {
    int choice;
    char candidateName[50];

    while (1) {
        printf("\n1. Add Candidate\n");
        printf("2. Cast Vote\n");
        printf("3. Display Results\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter candidate name: ");
                scanf("%s", candidateName);
                addCandidate(candidateName);
                break;
            case 2:
                printf("Enter candidate index to cast vote: ");
                int candidateIndex;
                scanf("%d", &candidateIndex);
                castVote(candidateIndex);
                break;
            case 3:
                displayResults();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}


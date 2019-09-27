#include <iostream>
/*
#include <QVector>
#include <QSet>
#include <QTime>
*/
typedef QVector< QVector< int > > Puzzle;
typedef QSet< int > Values;

class SudokuSolver {
public:
    static Puzzle solve( const Puzzle& puzzle ) {
        Puzzle solution = puzzle;
        if( solveHelper( &solution ) ) {
            return solution;
        }
        return Puzzle();
    }

    static bool solveHelper( Puzzle* solution ) {
        int minRow = -1;
        int minColumn = -1;
        Values minValues;
        forever {
            minRow = -1;
            for( int rowIndex = 0; rowIndex < 9; ++rowIndex ) {
                for( int columnIndex = 0; columnIndex < 9; ++columnIndex ) {
                    if( ( *solution )[ rowIndex ][ columnIndex ] != 0 ) {
                        continue;
                    }
                    Values possibleValues = findPossibleValues( rowIndex, columnIndex, *solution );
                    int possibleVaueCount = possibleValues.count();
                    if( possibleVaueCount == 0 ) {
                        return false;
                    }
                    if( possibleVaueCount == 1 ) {
                        ( *solution )[ rowIndex ][ columnIndex ] = *possibleValues.begin();
                    }
                    if( minRow < 0 || possibleVaueCount < minValues.count() ) {
                        minRow = rowIndex;
                        minColumn = columnIndex;
                        minValues = possibleValues;
                    }
                }
            }
            if( minRow == -1 ) {
                return true;
            } else if( 1 < minValues.count() ) {
                break;
            }
        }
        for( auto v : minValues ) {
            Puzzle solutionCopy = *solution;
            solutionCopy[ minRow ][ minColumn ] = v;
            if( solveHelper( &solutionCopy ) ) {
                *solution = solutionCopy;
                return true;
            }
        }
        return false;
    }

    static Values findPossibleValues( int rowIndex, int columnIndex, const Puzzle& puzzle ) {
        Values values;
        for( int i = 1; i < 10; ++i ) {
            values << i;
        }
        values -= getRowValues( rowIndex, puzzle );
        values -= getColumnValues( columnIndex, puzzle );
        values -= getBlockValues( rowIndex, columnIndex, puzzle );

        return values;
    }

    static Values getRowValues( int rowIndex, const Puzzle& puzzle ) {
        return Values::fromList( puzzle[ rowIndex ].toList() );
    }

    static Values getColumnValues( int columnIndex, const Puzzle& puzzle ) {
        Values values;
        for( int r = 0; r < 9; ++r ) {
            values << puzzle[ r ][ columnIndex ];
        }
        return values;
    }

    static Values getBlockValues( int rowIndex, int columnIndex, const Puzzle& puzzle ) {
        Values values;
        int blockRowStart = 3 * ( rowIndex / 3 );
        int blockColumnStart = 3 * ( columnIndex / 3 );
        for( int r = 0; r < 3; ++r ) {
            for( int c = 0; c < 3; ++c ) {
                values << puzzle[ blockRowStart + r ][ blockColumnStart + c ];
            }
        }
        return values;
    }
};

void printPuzzle( const Puzzle& puzzle ) {
    for( auto row : puzzle ) {
        for( auto v : row ) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Puzzle puzzle = {
        { 0, 0, 0, 0, 6, 0, 7, 0, 0 },
        { 0, 5, 9, 0, 0, 0, 0, 0, 0 },
        { 0, 1, 0, 2, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 1, 0, 0, 0, 0, 0 },
        { 6, 0, 0, 5, 0, 0, 0, 0, 0 },
        { 3, 0, 0, 0, 0, 0, 4, 6, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 9, 1 },
        { 8, 0, 0, 7, 4, 0, 0, 0, 0 }
    };

    printPuzzle( puzzle );
    std::cout << std::endl;

    QTime time;
    time.start();
    Puzzle solution = SudokuSolver::solve( puzzle );
    if( !solution.isEmpty() ) printPuzzle( solution );

    std::cout << std::endl;
    std::cout << time.elapsed() / 1000.0 << " sec" << std::endl;

    return 0;
}

#include <iostream>

//Definición de la clase GameMode
class GameMode
{
public:
    //Constructor de la clase
    GameMode();
    
    //Métodos de la clase
    void StartGame();
    void PauseGame();
    void EndGame();
    
private:
    bool isRunning;
};

//Definición del constructor de la clase
GameMode::GameMode()
{
    isRunning = false;
}

//Definición del método para iniciar el juego
void GameMode::StartGame()
{
    isRunning = true;
    std::cout << "Iniciando el juego..." << std::endl;
}

//Definición del método para pausar el juego
void GameMode::PauseGame()
{
    isRunning = false;
    std::cout << "Pausando el juego..." << std::endl;
}

//Definición del método para terminar el juego
void GameMode::EndGame()
{
    isRunning = false;
    std::cout << "Terminando el juego..." << std::endl;
}

int main()
{
    GameMode gameMode;
    gameMode.StartGame();
    gameMode.PauseGame();
    gameMode.EndGame();
    
    return 0;
}

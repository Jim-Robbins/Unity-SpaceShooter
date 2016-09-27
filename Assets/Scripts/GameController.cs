using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	public GameObject[] hazards;
	public Vector3 spawnValues;
	public int hazardCount;
	public float spawnWait;
	public float startWait;
	public float waveWait;

	public Text scoreText;
	public Text restartText;
	public Text gameOverText;
	public GameObject restartButton;

	private bool gameOver;
	private bool restart;
	private int score;
	private int waveCount = 1;

	void Start () {
		gameOver = false;
		restart = false;
		restartText.text = "";
		gameOverText.text = "";

		restartButton.SetActive (false);
		score = 0;
		UpdateScore ();
		StartCoroutine (SpawnWaves ());
	}
		
	IEnumerator SpawnWaves()
	{
		yield return new WaitForSeconds (startWait);
		while (true)
		{
			if (gameOver) {
				restartButton.SetActive (true);
				restart = true;
				break;
			} else {
				gameOverText.text = "Wave " + waveCount;
			}
				
			for (int i=0; i < hazardCount; i++) {
				GameObject hazard = hazards[Random.Range(0,hazards.Length)];
				Vector3 spawnPosition = new Vector3 (Random.Range (-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
				Quaternion spawnRotation = Quaternion.identity;

				Instantiate (hazard, spawnPosition, spawnRotation);

				yield return new WaitForSeconds (spawnWait);
				if (!gameOver) {
					gameOverText.text = "";
				}
				restartText.text = "Wave " + waveCount + "\n" + (i+1) + "/" + hazardCount;
			}
				
			yield return new WaitForSeconds (waveWait);
			waveCount++;
			hazardCount += 5;
		}
	}

	public void GameOver()
	{
		gameOver = true;
		gameOverText.text = "Game Over";
	}

	public void AddScore (int newScoreValue)
	{
		score += newScoreValue;
		UpdateScore ();
	}

	public void RestartGame() {
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

	private void UpdateScore()
	{
		scoreText.text = "Score: " + score;
	}
		
}

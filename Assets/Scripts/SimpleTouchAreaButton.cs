using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class SimpleTouchAreaButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
	private bool touched;
	private int pointerID;
	private bool canFire;

	void Awake ()
	{
		touched = false;
	}

	public void OnPointerDown (PointerEventData data)
	{
		if (!touched) {
			pointerID = data.pointerId;
			toggleTouch(true);
		}
	}

	public void OnPointerUp (PointerEventData data)
	{
		if (data.pointerId == pointerID) 
		{
			toggleTouch(false);
		}
	}

	private void toggleTouch(bool isEnabled)
	{
		canFire = touched = isEnabled;
	}

	public bool CanFire() {
		return canFire;
	}
}


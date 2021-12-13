// This could be refactred into multiple message sub-classes, but to make it simple I left it alone.
using UnityEngine;
[System.Serializable]
public class PlayerPositionMessage : GameMessage
{
    public SerializableQuaternion gunRot;
    public SerializableQuaternion currentRot;
    public SerializableVector3 currentPos;
    public SerializableVector3 enemyPos;
    public string player;
    public string moving;

    public PlayerPositionMessage(string actionIn, string opcodeIn, SerializableQuaternion _gunRot, SerializableQuaternion _currentRot, 
                                SerializableVector3 _currentPos, SerializableVector3 _enemyPos, string playerIn, string _moving)
       : base(actionIn, opcodeIn)
    {
        gunRot = _gunRot;
        currentRot = _currentRot;
        player = playerIn;
        enemyPos = _enemyPos;
        currentPos = _currentPos;
        moving = _moving;
    }
}
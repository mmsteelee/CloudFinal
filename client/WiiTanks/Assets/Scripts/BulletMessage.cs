[System.Serializable]
public class BulletMessage : GameMessage
{
    public SerializableQuaternion gunDir;
    public SerializableVector3 firePoint;
    public BulletMessage(string actionIn, string opcodeIn, SerializableQuaternion _gunDir, SerializableVector3 _firepoint) 
        : base(actionIn, opcodeIn)
    {
        gunDir = _gunDir;
        firePoint = _firepoint;
    }
}

#pragma once

class class_BswM{
   public:
      void InitFunction                   (void);
      void DeInitFunction                 (void);
      void CurrentWakeupSources           (void);
      void PartitionRestarted             (void);
      void CurrentIcomConfiguration       (void);
      void CurrentState                   (void);
      void CurrentMode                    (void);
      void CurrentPNCMode                 (void);
      void InitiateReset                  (void);
      void ApplicationUpdated             (void);
      void CurrentWakeup                  (void);
      void PortGroupLinkStateChg          (void);
      void GetVersionInfo                 (void);
      void BroadcastStatus                (void);
      void StateChangeNotification        (void);
      void CurrentSchedule                (void);
      void RequestMode                    (void);
      void CarWakeUpIndication            (void);
      void CurrentBlockMode               (void);
      void CurrentJobMode                 (void);
      void ClientServiceCurrentState      (void);
      void ConsumedEventGroupCurrentState (void);
      void EventHandlerCurrentState       (void);
      void RequestPartitionReset          (void);
      void MainFunction                   (void);
};

extern class_BswM BswM;

